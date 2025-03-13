import os
import re

directory = "DSA_Practice"

# Extract files that match the day-wise pattern
files = sorted(os.listdir(directory))

# Function to extract the day number from the filename
def extract_day_number(filename):
    match = re.search(r'day(\d+)', filename, re.IGNORECASE)
    return int(match.group(1)) if match else float('inf')  # Assign inf if no day found

# Sort files by day number, ensuring proper order
files.sort(key=extract_day_number)

# Write to README.md in clickable format
with open("README.md", "w") as readme:
    readme.write("# DSA Practice Problems\n\n")

    # Dictionary to store files by day
    problems_by_day = {}

    for file in files:
        match = re.search(r'day(\d+)', file, re.IGNORECASE)
        if match:
            day = int(match.group(1))
            if day not in problems_by_day:
                problems_by_day[day] = []
            problems_by_day[day].append(file)

    # Writing problems day-wise
    for day in sorted(problems_by_day.keys()):
        readme.write(f"## Day {day}\n")
        for file in problems_by_day[day]:
            readme.write(f"- [{file}]({directory}/{file})\n")
        readme.write("\n")  # Extra space for readability

print("README updated successfully with clickable links!")
