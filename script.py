import os
import time
from datetime import datetime

while True:
    timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    commit_message = f"Some New Updates at {timestamp}"

    os.system("git add .")
    os.system(f'git commit -am "{commit_message}"')
    os.system("git push")

    time.sleep(5)  # 60 seconds = 1 minute

