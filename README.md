# projects-cpp

A collection of small C++ applications, each living in its own folder.

## Structure

Each top-level folder is a standalone C++ project/app with its own source code and (where applicable) build files.

```
projects-cpp/
├── <app-name>/
│   └── ...
├── <app-name>/
│   └── ...
└── README.md
```

## Building

Unless noted otherwise in an individual project's own README, projects can be built with a standard C++ compiler, e.g.:

```sh
g++ -std=c++17 -o app main.cpp
```

Check each app's folder for any project-specific build instructions.
