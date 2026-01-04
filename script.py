import os
import time
from datetime import datetime

while True:
    status = os.popen("git status --porcelain").read().strip()

    if status:
        timestamp = datetime.now().strftime("%Y - %H:%M")
        commit_message = f"commit at {timestamp}"
        os.system("git add .")
        os.system(f'git commit -m "{commit_message}"')
        os.system("git push")
    time.sleep(10)
