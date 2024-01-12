# Type conversion

## string => integer

```c++
#include <sstream>
#include <string>

int main() {
    std::string str = "42";
    std::stringstream ss(str);
    int num;

    ss >> num;

    return 0;
}
```
