
import os

def generate_directory_structure(topics, difficulties):
    for topic in topics:
        for difficulty in difficulties:
            path = os.path.join(topic, difficulty)
            os.makedirs(path, exist_ok=True)

def generate_files(topics, difficulties, num_problems):
    for topic in topics:
        for difficulty in difficulties:
            for i in range(1, num_problems + 1):
                filename = f"{i}_{topic.lower().replace(' ', '_')}_{difficulty.lower()}.py"
                filepath = os.path.join(topic, difficulty, filename)
                with open(filepath, 'w') as file:
                    # You can add some template content or leave it empty for now
                    file.write(f"# {topic} - {difficulty}\n\n")

if __name__ == "__main__":
    # Define the topics, difficulties, and the number of problems for each difficulty
    topics = ["Array", "String", "Dynamic Programming"]
    difficulties = ["Easy", "Medium", "Hard"]
    num_problems = 5

    # Generate directory structure
    generate_directory_structure(topics, difficulties)

    # Generate files
    generate_files(topics, difficulties, num_problems)

    print("LeetCode directory structure and files generated successfully.")
