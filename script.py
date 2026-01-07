import os
import time
from datetime import datetime

while True:
    status = os.popen("git status --porcelain").read().strip()

    if status:
        timestamp = datetime.now().strftime("%A - %H:%M")
        commit_message = f"Day 2 DSA Pattern / {timestamp}"
        os.system("git add .")
        os.system(f'git commit -m "{commit_message}"')
        os.system("git push")
        print(f"✅ {commit_message} ")
    time.sleep(10)
