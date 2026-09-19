# HANDMADE_HERO

## How to put your code on GitHub and send us a Pull Request

Welcome to **handmade_hero** by **The Free Code Syndicate**.

This series teaches you how to write C, understand computers, and use Git and GitHub like a professional software engineer. Git can feel a little scary at first, but this guide will take you step-by-step from installing it to submitting your first Pull Request.

Take it slow and do not skip ahead.

---

# What are we doing?

You cannot edit our project folder directly. Instead, you follow this path:

```text
Our GitHub repository -> Fork -> Your GitHub copy -> Clone -> Your computer -> Write code -> Commit & Push -> Pull Request -> Merged!

```

---

# 1. What are Git and GitHub?

* **Git** tracks the history of your code on your local computer so you can see past versions.
* **GitHub** stores your Git projects on the internet so others can share and see them.

---

# 2. Step 1 — Check if Git is installed

Open your terminal and type:

```bash
git --version

```

If you see a version number, Git is installed. If not, install it for your operating system:

* **Fedora:** `sudo dnf install git`
* **Ubuntu / Debian:** `sudo apt install git`
* **Arch Linux:** `sudo pacman -S git`
* **Windows / macOS:** Download from [git-scm.com/downloads](https://git-scm.com/downloads?utm_source=gemini) or use Homebrew (`brew install git`).

---

# 3. Step 2 — Get a GitHub account

Go to [github.com](https://github.com?utm_source=gemini) and make a free account if you do not have one.

---

# 4. Step 3 — Fork the repository

Go to our project page:
[https://github.com/TheFreeCodeSyndicate/handmade_hero](https://github.com/TheFreeCodeSyndicate/handmade_hero?utm_source=gemini)

Click the **Fork** button at the top right and copy the project to your own GitHub account. A **fork** is simply your own personal online copy of someone else's project.
<img width="1696" height="357" alt="image" src="https://github.com/user-attachments/assets/b6087d0d-5e2b-448a-a818-25647b4ef8f3" />

---

# 5. Step 4 — Clone your fork

Downloading your online GitHub repository to your computer is called **cloning**.

1. Go to your fork (you will find that in your account -> repository tab) on GitHub and copy the web link (you will find that in the blue **code** button. 
2. Open your terminal, go to where you want to keep your projects (for example, `cd ~/Documents`), and run:
<img width="1212" height="565" alt="image" src="https://github.com/user-attachments/assets/cf1ce48d-fc6d-48a3-ac85-300e517e6c41" />

```bash
git clone https://github.com/YOUR_USERNAME/handmade_hero.git

```

3. Step inside the folder:

```bash
cd handmade_hero

```

---

# 6. Important: Create your own folder

Everyone keeps their work inside their own personal directory named after their GitHub username. Never touch someone else's folder.

Create and enter your folder:

```bash
mkdir YOUR_USERNAME
cd YOUR_USERNAME

```

---

# 7. Write and test your code

Create your C program (for example, `hello.c`):

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, Handmade Hero!\n");
    return 0;
}

```

Always test your code before pushing it:

```bash
gcc hello.c -o hello
./hello

```

If it works, go back to the main project root folder:

```bash
cd ..

```

---

# 8. Save and push your changes

Run these four essential commands:

```bash
git status
git add .
git commit -m "Add my first C program"
git push

```

* `git status` — Checks what changed.
* `git add .` — Packs your changes into a box.
* `git commit` — Saves a permanent snapshot with a message.
* `git push` — Sends your changes up to GitHub.

---

# 9. Step 5 — Create the Pull Request

1. Go to your fork on GitHub.
2. Click **Compare & pull request**.
3. Make sure it points to `TheFreeCodeSyndicate/handmade_hero` as the base repository.
4. Give it a clear title and description, then click **Create pull request**.

If we ask you to fix something, just edit your code locally, then run:

```bash
git add .
git commit -m "Fix requested changes"
git push

```

Your Pull Request will update automatically!
