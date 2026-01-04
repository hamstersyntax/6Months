# import os
# import time
# from datetime import datetime

# while True:
#     status = os.popen("git status --porcelain").read().strip()

#     if status:
#         timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
#         commit_message = f"commit at {timestamp}"

#         os.system("git add .")
#         os.system(f'git commit -m "{commit_message}"')
#         os.system("git push")

#     time.sleep(10)
import subprocess
import time
from datetime import datetime

INTERVAL = 10   # seconds
MAX_FILES = 5


def run(cmd):
    result = subprocess.run(
        cmd,
        shell=True,
        capture_output=True,
        text=True
    )
    return result.returncode, result.stdout.strip(), result.stderr.strip()


while True:
    code, status, err = run("git status --porcelain")

    if code != 0:
        print("❌ Git error:", err)
        time.sleep(INTERVAL)
        continue

    if status:
        files = [line[3:] for line in status.splitlines()]

        if len(files) > MAX_FILES:
            file_list = ", ".join(files[:MAX_FILES]) + "..."
        else:
            file_list = ", ".join(files)

        timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        message = f"commit at {timestamp} | files: {file_list}"

        run("git add .")

        code, _, err = run(f'git commit -m "{message}"')
        if code != 0:
            print("⚠️ Commit skipped:", err)
            time.sleep(INTERVAL)
            continue

        code, _, err = run("git push")
        if code != 0:
            print("⚠️ Push failed:", err)
        else:
            print("✅ Committed & pushed")

    time.sleep(INTERVAL)