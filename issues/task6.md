# Task 6: Write C code

Please start to remember what you have done for C class. Or learn it anew.

Your tasks:
1. In **`code.c`**, write a piece of very simple (yet correct) C code (e.g. Hello World, simple for loop, simple if...then...else, etc.)
2. Set up a GitHub Action with a workflow to run the C code, referencing here: https://help.github.com/en/actions/building-and-testing-code-with-continuous-integration/setting-up-continuous-integration-using-github-actions 
3. Since you didn't include anything for configure or make, you should only use this line for `run:`, and remove irrelevant lines
- *`gcc code.c -o code; ./code`*
4. This action will deploy your code every time there is a push (merge action) into the master branch
- It usually takes a while to finish, but should be just a short wait if your code is simple

Continuous Integration in GitHub is a big topic. To know more, try this yourself: https://lab.github.com/githubtraining/github-actions:-continuous-integration
