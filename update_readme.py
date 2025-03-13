import os
import re

def extract_day_and_problem(filename):
    """Extract day and problem number from filename using regex."""
    match = re.match(r'day(\d+)-Problem-?(\d+)?\.cpp', filename)
    if match:
        day = int(match.group(1))
        problem = int(match.group(2)) if match.group(2) else 0  # Default to 0 if problem number is missing
        return day, problem
    return float('inf'), float('inf')  # Ensure unrecognized filenames go to the end

def update_readme():
    folder_path = '.'  # Update this if needed
    cpp_files = [f for f in os.listdir(folder_path) if f.endswith('.cpp')]

    # Sort files based on extracted day and problem number
    sorted_files = sorted(cpp_files, key=extract_day_and_problem)

    readme_content = '\n'.join(f"- {file}" for file in sorted_files)

    with open("README.md", "w") as readme_file:
        readme_file.write(readme_content)

    print("README.md updated successfully!")

if __name__ == "__main__":
    update_readme()
