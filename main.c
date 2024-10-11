#include <stdio.h>

/* ----------------------------------------------⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⢀⣀⣀⣀⠀⠀⠀⠀⢀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⢸⣿⣿⡿⢀⣠⣴⣾⣿⣿⣿⣿⣇⡀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⢸⣿⣿⠟⢋⡙⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣿⡿⠓⡐⠒⢶⣤⣄⡀⠀⠀
⠀⠸⠿⠇⢰⣿⣿⡆⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⣿⣿⡷⠈⣿⣿⣉⠁⠀
⠀⠀⠀⠀⠀⠈⠉⠀⠈⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠀⠈⠉⠁⠀⠈⠉⠉⠀⠀
⠀⠀⠀⠀⠀⠀⠀ Introduction to Git
Git is an incredibly useful tool allowing groups
 of developers to work alongside each other within
 the same files and projects.

Git is used for the following:
 - Version Control
 - Branching & Merging
 - Backup & Safety
 - Project Management

 We're going to focus on teaching you Branching & Merging.

 Intro.
 Repositories store code. Inside each repository is a main branch or master branch.
 Which contains the most up to date "working" code that should be able to be deployed
 into use.

    ** What is a branch? **
    A branch in Git is like a separate workspace where you can work on changes to a project without affecting the main version.
    Imagine you're working on a copy of a document, but instead of editing the original, you create a duplicate where you can make all the
    changes you want. Once you're happy with the changes, you can merge your copy back into the main document.

How do we want to use branches?
 - Effectively whenever you are working on a piece of code CREATE A BRANCH!
 - This will allow you to work on your project in peace.
 - When you are finished with your code, create a merge request.


What is a Pull/Merge Request?
 - When you complete your feature, you should create a pull request. (asks the Powertrain Leads to review the code)
 - The Powetrain Leads will either comment and request changes to your code, or approve your code to be merged to the main codebase.
 - Once approval has been given, merge away!
*/

char driver[21][20] = {"Charles Le Clerc",
                    "Carlos Sainz",
                    "Lewis Hamilton",
                    "George Russel",
                    "Franco Colapinto",
                    "Alex Albon",
                    "Lando Norris",
                    "Oscar Piastri",
                    "Max Verstappen",
                    "Sergio Perez",
                    "Kevin Magnussen",
                    "Nico Hulkenberg",
                    "Lance Stroll",
                    "Fernando Alonso",
                    "Yuki Tsunoda",
                    "Daniel Ricciardo",
                    "Liam Lawson",
                    "Pierre Gasly",
                    "Esteban Ocon",
                    "Valtteri Bottas",
                    "Zhou Guanyu",
};


// ----------
// NOTE
// You will be judged by your peers heavily for your answers in this exercise!
// ----------

// TODO Who is the best driver on the grid?
void best_driver() {
}

// TODO who is the worst driver on the grid?
void worst_driver(){

}

// TODO Who is the most overrated driver on the grid?
void most_overrated(){

}

// TODO Who is the most underrated driver on the grid?
void most_underrated(){
}

// TODO who is the most aggressive driver?
void most_aggressive_driver() {

}

// TODO who is the most consistent driver?
void most_consistent_driver() {

}

void main() {
    best_driver();
    worst_driver();
    most_overrated();
    most_underrated();
    most_aggressive_driver();
    most_consistent_driver();
}