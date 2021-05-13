import subprocess
import sys

class scriptRunner():
    def RunScript(script):
        theproc = subprocess.Popen(
            [sys.executable, "-c", script]
            )