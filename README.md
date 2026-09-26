# My codeforces solutions
mostly c++, some contests might be in python


# Compiling with:
Local Codeforces compile: cf solution  ->  solution.cpp compiled to ./solution

```
cf() {
  if [[ $# -ne 1 ]]; then
    echo "usage: cf <file>" >&2
    return 1
  fi
  local src="${1%.cpp}"
  g++-15 -std=c++23 -O2 -Wall "${src}.cpp" -o "$src"
}
```