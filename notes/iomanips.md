# iomanips

Example :

```c++
#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.14159;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "Value of pi to 2 decimal places: " << pi << std::endl;
    return 0;
}
```

Commonly used manipulators provided by the iomanip library :

- `std::setw(int n)`: Sets the field width to be used on output operations.

```c++
std::cout << std::setw(10) << 77 << std::endl; // 77 => "        77"
```

- `std::setfill(char c)`: Sets the fill character to be used on output operations.

```c++
std::cout << std::setfill('*') << std::setw(10) << 77 << std::endl; // 77 => "********77"
```

- `std::setprecision(int n)`: Sets the decimal precision to be used to format floating-point values on output operations.

```c++
std::cout << std::setprecision(4) << 3.14159 << std::endl; // 3.14159 => "3.1416"
```

- `std::fixed`: Use fixed floating-point notation.

```c++
std::cout << std::fixed << 3.14159 << std::endl; // 3.14159 => "3.141590"
```

- `std::scientific`: Use scientific floating-point notation.

```c++
std::cout << std::scientific << 3.14159 << std::endl; // 3.14159 => "3.141590e+00"
```

- `std::hex`: Outputs the number in hexadecimal format.

```c++
std::cout << std::hex << 255 << std::endl; // 255 => "ff"
```

- `std::dec`: Outputs the number in decimal format.

```c++
std::cout << std::dec << 255 << std::endl; // 255 => "255"
```

- `std::oct`: Outputs the number in octal format.

```c++
std::cout << std::oct << 255 << std::endl; // 255 => "377"
```

- `std::boolalpha`: Inserts/extracts bool values as "true" or "false" texts.

```c++
std::cout << std::boolalpha << true << std::endl; // true => "true"
```

- `std::noboolalpha`: Stops the insertion/extraction of bool values as "true" or "false" texts.

```c++
std::cout << std::noboolalpha << true << std::endl; // true => "1"
```

- `std::showbase`: Activates the showbase flag, which shows the base field for integer output.

```c++
std::cout << std::showbase << std::hex << 255 << std::endl; // 255 => "0xff"
```

- `std::noshowbase`: Deactivates the showbase flag.

```c++
std::cout << std::noshowbase << std::hex << 255 << std::endl; // 255 => "ff"
```

- `std::showpoint`: Sets the showpoint format flag for the str stream.

```c++
std::cout << std::showpoint << 100.0 << std::endl; // 100.0 => "100.000000"
```

- `std::noshowpoint`: Unsets the showpoint format flag for the str stream.

```c++
std::cout << std::noshowpoint << 100.0 << std::endl; // 100.0 => "100"
```

- `std::showpos`: Sets the showpos format flag for the str stream.

```c++
std::cout << std::showpos << 100 << std::endl; // 100 => "+100"
```

- `std::noshowpos`: Unsets the showpos format flag for the str stream.

```c++
std::cout << std::noshowpos << 100 << std::endl; // 100 => "100"
```

- `std::uppercase`: Sets the uppercase format flag for the str stream.

```c++
std::cout << std::uppercase << std::hex << 255 << std::endl; // 255 => "FF"
```

- `std::nouppercase`: Unsets the uppercase format flag for the str stream.

```c++
std::cout << std::nouppercase << std::hex << 255 << std::endl; // 255 => "ff"
```

- `std::left`: Adjusts output to the left.

```c++
std::cout << std::left << std::setw(10) << 77 << std::endl; // 77 => "77        "
```

- `std::right`: Adjusts output to the right.

```c++
std::cout << std::right << std::setw(10) << 77 << std::endl; // 77 => "        77"
```

- `std::internal`: Adjusts output to the internal.

```c++
std::cout << std::internal << std::setw(10) << -77 << std::endl; // -77 => "-       77"
```

- `std::setiosflags(std::ios::fmtflags mask)`: Sets the format flags indicated by mask.

```c++
std::cout << std::setiosflags(std::ios::showpos) << 100 << std::endl; // 100 => "+100"
```

- `std::resetiosflags(std::ios::fmtflags mask)`: Clears the format flags indicated by mask.

```c++
std::cout << std::resetiosflags(std::ios::showpos) << 100 << std::endl; // 100 => "100"
```
