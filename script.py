import re

def search_strings_in_file(file_path, search_strings):
    """
    Searches for strings in a file and prints out the lines containing those strings.
    
    Parameters:
    file_path (str): The path to the file to be searched.
    search_strings (list): A list of strings to search for in the file.
    """
    try:
        with open(file_path, 'r', encoding='utf-8') as file:
            lines = file.readlines()
            
            # Create a regex pattern to match any of the search strings
            pattern = re.compile('|'.join(map(re.escape, search_strings)), re.IGNORECASE)
            
            for line_number, line in enumerate(lines, start=1):
                if pattern.search(line):
                    print(f"Line {line_number}: {line.strip()}")
                    
    except FileNotFoundError:
        print(f"Error: The file at {file_path} was not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    file_path = input("Enter the path to the file: ")
    search_strings = input("Enter the strings to search for (comma separated): ").split(',')
    search_strings = [string.strip() for string in search_strings]  # Remove any extra whitespace
    search_strings_in_file(file_path, search_strings)