Package: vcpkg-cmake:x64-linux@2024-04-23

**Host Environment**

- Host: x64-linux
- Compiler: GNU 15.2.1
- CMake Version: 4.1.1
-    vcpkg-tool version: 2025-09-03-4580816534ed8fd9634ac83d46471440edd82dfe
    vcpkg-scripts version: unknown

**To Reproduce**

`vcpkg install `

**Failure logs**

```
-- Installing: /opt/vcpkg/packages/vcpkg-cmake_x64-linux/share/vcpkg-cmake/vcpkg_cmake_configure.cmake
-- Installing: /opt/vcpkg/packages/vcpkg-cmake_x64-linux/share/vcpkg-cmake/vcpkg_cmake_build.cmake
-- Installing: /opt/vcpkg/packages/vcpkg-cmake_x64-linux/share/vcpkg-cmake/vcpkg_cmake_install.cmake
-- Installing: /opt/vcpkg/packages/vcpkg-cmake_x64-linux/share/vcpkg-cmake/vcpkg-port-config.cmake
CMake Error at ports/vcpkg-cmake/portfile.cmake:13 (file):
  file INSTALL cannot find "/opt/vcpkg/LICENSE.txt": No such file or
  directory.
Call Stack (most recent call first):
  scripts/ports.cmake:206 (include)



```

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "name": "raylib-game",
  "description": "2d RayLib Game",
  "license": "MIT",
  "dependencies": [
    "raylib"
  ]
}

```
</details>
