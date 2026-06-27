# Needed
### Windows 10/11
Did not test on 7, but theoretically possible.
### Zip and Rar archive extractor
Windows is bundled with it nowdays, if your windows installation does not have one, you can install 7Zip or WinRar (both can extract Zip and Rar, so you need only one)
- install 7Zip: https://7-zip.org/download.html
- install WinRar: https://www.win-rar.com/download.html
### Lineage 2 Gracia Final Client and preferably server too.
I'm using both from https://disk.yandex.ru/d/s1EXP5LuW6HaiQ
you can click download all on top right, start downloading now, it takes some time.
It's bacically a ready solution, But you can use
https://bitbucket.org/l2jserver/l2j-server-cli/src/master/ to set up server, BUT currently their version is HighFive and this repo targets Gracia Final, so unless you change the repo or find old l2jserver, its not going to work.
In the link that I used server is a bit broken, but it does work, and it is easy to set it up.

- For thouse who want to try develop on l2j (i'll be using more technical terminology, normal users can skip to next paragraph):
clone https://bitbucket.org/l2jserver/l2j-server-cli.git, build it, extract target/l2jcli-1.2.5.zip into another folder, go to that folder, run l2jcli.bat type h to see commands and bacically run them in order they are written. Obviously you need mysql, java, maven and something else idk its java you always need something else

### git
Install git here: https://git-scm.com/install/windows
### Visual C++
If you played Lineage 2 or other games before, you probably already have it
### Visual Studio 2017+
You can install any version past 2017, but you need to add additional tool in installation, specifically `MSVC version 141`.
If you forgor to check it you can always come back:


<p align=center>
  <img src=".\img\vsinstaller.png" width=800>
</p>
<p align=center>
  <img src=".\img\vsinstaller2.png" width=800>
</p>
<p align=center>
  <img src=".\img\vsinstaller3.png" width=800>
</p>


- newest: https://visualstudio.microsoft.com/downloads/
- old: https://gist.github.com/Chenx221/6f4ed72cd785d80edb0bc50c9921daf7
2017 is here too, I'm using 2022. The links are official (aka.ms prooves it), but you will struggle to find them on Microsoft site by searching yourself
### DLL injector
There are many, I will be using https://github.com/nefarius/Injector because it's straightforward and automatable.
- You can get it here: https://github.com/nefarius/Injector/releases/tag/v1.5.0

# Preparations
Boot up Windows 10/11, connect to the internet.  
Create a folder where you will be doing development
open cmd/powershell in new folder. I will be showing `cmd` as it's easier.
You can open cmd in current folder by opening it with explorer, and writing `cmd` instead of path to the folder and pressing enter.

<p align=center>
  <img src=".\img\open_cmd1.png" width=800>
</p>
<p align=center>
  <img src=".\img\open_cmd2.png" width=800>
</p>
<p align=center>
  <img src=".\img\open_cmd3.png" width=800>
</p>

in cmd write this:

```
git clone https://github.com/bobon4uto/L2_UnrealEngineSDKGenerator.git --depth=1
```
Hit enter. This will clone the repository to L2_UnrealEngineSDKGenerator inside development folder. depth=1 is used to not store old commits, you can remove it and keep old commits, that will require more disk space. Go back to file explorer and open new folder, find `UnrealEngineSDKGenerator.sln` file and oprn it with visual studio (double tap, it should work)
You will be immideatly promped to retarget the project, You need to choose full version name of Windows SDK `not updating` will not work, and keeping not full version e.g. 10.0 will not work too. In my example full version is `10.0.26100.0`, yours may be different.
For tools - do not update. it has to be v141.
<p align=center>
  <img src=".\img\invscode1.png" width=800>
</p>
<p align=center>
  <img src=".\img\invscode2.png" width=800>
</p>
<p align=center>
  <img src=".\img\invscode3.png" width=800>
</p>

On the right side you will see 3 projects - `Lineage2`, `Lineage2_hook`, `Lineage2_mod`
- `Lineage2` is needed to create the SDK, if the one that I bundle appears to be incomplete ( and it is ), you can create better SDK if you find what I missed.  
- `Lineage2_hook` is needed to hook process event, its the main tool that starts the modding.
- `Lineage2_mod` is the mod that hook loads, and gives that mod the process event.
Don't overthink it, we just need to compile `Lineage2_hook` and `Lineage2_mod`.
first, make sure you're in `Debug x86` - look at top left, if its not that, change it.

<p align=center>
  <img src=".\img\proj1.png" width=800>
</p>

<p align=center>
  <img src=".\img\proj2.png" width=800>
</p>

<p align=center>
  <img src=".\img\proj3.png" width=800>
</p>

Once set to `Debug x86`, you can compile `Lineage2_hook` and `Lineage2_mod`. For each of them, rightclock and press `build` (should be the first in list thast pops up on rightclick)
First compilation may take some time. loop at the bttom left to check the progress.

<p align=center>
  <img src=".\img\comp1.png" width=800>
</p>
<p align=center>
  <img src=".\img\comp2.png" width=800>
</p>


If no errors occured, there should be new `(development folder)\L2_UnrealEngineSDKGenerator\x86\Debug` folder with `Lineage2_hook.dll` and `Lineage2_mod.dll` inside, among other files with similar names.  
Now The hard part is done. Do not close Visual studio, as we will return to it. go to the `development folder` that we created at the start.  
Open Lineage_2.zip that you downloaded [at the start](#lineage-2-gracia-final-client-and-preferably-server-too), inside you will see `Lineage_2` folder, drag and drop it into `development folder`.
Go into Lineage_2 folder that is in the development folder and inside you will see other folders, we need `client` and `server`. Start with the server. Open server folder, you will see `La2offline4.rar` inside.  
You can do wat you've done with Lineage_2.zip here, or rightclick and choose 7-Zip -> extract to `La2offline4`.  
open extracted folder, you will find `La2offline.exe`. This is the server. Right click select `create shortcut`, copy the new created shortcut and put it into development. Go to development folder, execute shortcut in it. First time it will go through tutorial, click 
- next
- next
- first option
- close the window

In main window click on top left first option `start MySql`, wait for `MySql` to turn green. Then second option `Start Server`, wait until Game turns green.
Go back to Lineage_2 folder. open client folder. Extract `Lineage_II_Gracia_Final_p87_win10.rar` the same way you extracted server. Go to extracted folder, `Lineage II Gracia Final` -> `System`, find `l2.exe`, right click select `create shortcut`, copy the new created shortcut and put it into development folder.
Go to the development folder. Execute the shortcut. It will start the game, input any login and password, it will be saved as new account. create new character and start the game. If the game is fullscreen press Win+alt+enter to exit fullscreen, make window small or minimize it for now.  
Now we need to hook it. 
put [Dll injector](#dll-injector)  (the one from Win32 folder of zip) into development folder. and create new file `inject.bat`, If file explorer does not show extentions, you can turn them on by selecting on thwe top left `view` -> `show file extentions`. Windows might warn you that "file will not be available", but its false. Right click new created `injector.bat` and select `edit` or `open with...` -> `notepad`. 
```bat
Injector.exe --process-name L2.exe --inject L2_UnrealEngineSDKGenerator\x86\Debug\Lineage2_hook.dll
```
save the file. Double click it. If nothing happens open cmd and write
```
inject.bat
```
It should say what is wrong. L2.exe might be renamed, check game window. If it cant find dll, ceck that you compiled it correctly before and that file exists, if it does, but script refuses anyway, write full path to the dll.  

If all is ok, new window will pop up with something like this:
```
BUILD DATE:Jun 27 2026
BUILD TIME:21:55:33

=======================================
the new pe is:6F41C159
d:\l2develop\l2_unrealenginesdkgenerator\x86\Debug\Lineage2_mod.dll
will be loaded if you write lm in chat
=======================================
```
This is the hook reporting. As it says, you should print lm to chat. lets do that. write lm and hit enter
```
L
M

LoadMod
loading dll: d:\l2develop\l2_unrealenginesdkgenerator\x86\Debug\Lineage2_mod.dll
```
Great, mod is loaded! By default it does nothing. Lets make it do something!  
Before changing the behaviour of the mod, we need to unload it, write `um` in chat, this will unload the mod. check the game console, it should have:
```
U
M

UnloadMod
```
If `UnloadMod` is not present, mod was not unloaded, It usually happens when you press other keys, for example f-row keys. they get registered too. Just repeat writing `um` and see `UnloadMod` appear  
After unloading the mod, return to Visual studio. Open Lineage2_mod on the right by pressing the rtiangle


<p align=center>
  <img src=".\img\code1.png" width=800>
</p>

Then select Main.cpp
<p align=center>
  <img src=".\img\code2.png" width=800>
</p>
It will open the code inside. You can read comments to understand what each section is doing, but we will go straight to the juice.
locate this part:

```cpp
    AActor* self =  static_cast<AActor*> (pThis);
    //// put any logic there, eg 
    // if (is(name, "wh_heal_ta") 
    //   &&is(fn,".BeginPlay")
    // ) {
    //   MetaActor* self_ma = get_ma(self->Owner);
    //   self_ma->target_scale *=1.2;
    // }
```
This is where main logic should be. the example can be read as follows:
if name (name of the self object) is `wh_heal_ta` and it is executing method `BeginPlay`
then get Meta information about OWNER of it and increase  their scale by 1.2  

Lets unpack - what is `wh_heal_ta`? It is actually healing animation on the target. `BeginPlay` - start of the animation. The owner is a character that is recieving the healing. So when healing animation starts, the character will grow by 1.2  

Lets uncomment the logic then, remove two slashes from each line. your code should look like this:


```cpp
    AActor* self =  static_cast<AActor*> (pThis);
    // put any logic there, eg 
     if (is(name, "wh_heal_ta") 
       &&is(fn,".BeginPlay")
     ) {
       MetaActor* self_ma = get_ma(self->Owner);
       self_ma->target_scale *=1.2;
     }
```
Rightclick on Lineage2_mod on the right and build like we did the first time. If on the bottom compiler reported that it cannot access dll, it means the game is still using it - try `um` in game chat. If does not help - check that we build Debug on top left. Release cannot hot reload. If you made release, you have to close the game, open it again and run `inject.bat` again.  
If no problems occured, open the game and write `lm`. It should load the mod. to test that the mod works, create new human/elf/dark elf make and cast self-heal (it is on f11 by default). Your character should grow.


<p align=center>
  <img src=".\img\ingame1.png" width=800>
</p>
<p align=center>
  <img src=".\img\ingame2.png" width=800>
</p>

That's it. Now its a mater of writing logic and recompiling. Remember to unload the mod and load it back. I will be writing some ideas I have in `L2_UnrealEngineSDKGenerator\Target\Lineage2_mod\examples` but I wanna mention, even If you do not know how to code - you can just ask AI. Remember that it does not know the names of all animations and other stuff, so first ask it how to get the names, then show ai the names and then ask it to write what you want.



