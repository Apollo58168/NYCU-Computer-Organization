#!/usr/bin/env python3
import subprocess
import sys

prompt = (
    "Enter exactly 1 ASCII char\n"
    "- Over 1 will be truncated\n"
    "- Canceling will end the sim\n"
    "- Entering NULL char also"
)

# launch Zenity’s entry box with a 3-line prompt
proc = subprocess.run([
    "zenity", "--entry",
    "--title=CO-FPGA UART TB Input",
    "--text", prompt,
], capture_output=True, text=True)

s = proc.stdout.strip()
# keep only the first character (or empty)
out = s[:1] if s else ""
# print it out
print(out, end="", flush=True)
