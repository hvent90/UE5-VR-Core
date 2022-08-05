# VR Core

## Installation
-------

### - **Controls**
Copy and paste the contents of `./VrCore/Config/DefaultInput.ini` into `./YourProject/Config/DefaultInput.ini`.

### - **Dependencies**
This project depends on [VRExpansion Plugin](https://github.com/mordentral/VRExpansionPlugin). As such, it is included in this project as a `git submodule`. VRExpansion Plugin will be included automatically when you clone this repository.

### - **Vr Core Plugin**

There are two ways to install the contents of the plugin to your project.

The quick way is to clone this project into your project's plugins folder (example: `./YourProject/Plugins/VrCore/VrCore.uplugin`).

The alternative way is to install this as a git submodule. Run this command from your project root:
```sh
git submodule add https://github.com/hvent90/UE5-VR-Core.git ./Plugins/Vr`
cd ./Plugins/Vr
git submodule init
git submodule update
```
