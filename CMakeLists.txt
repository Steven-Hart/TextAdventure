cmake_minimum_required(VERSION 3.14)
project(TextAdventure)

set(CMAKE_CXX_STANDARD 17)

add_executable(cmake_textadventure main.cpp
        Zorkish.cpp
        GameState.cpp
        MainMenu.cpp
        About.cpp
        Help.cpp
        SelectAdventure.cpp
        Gameplay.cpp
        NewHighScore.cpp
        ViewHallOfFame.cpp
        Player.cpp
        Inventory.cpp
        Item.cpp
        Graph.cpp
        Location.cpp
        World.cpp
        Command.cpp
        CommandMove.cpp
        CommandManager.cpp
        CommandLook.cpp
        CommandHelp.cpp
        CommandInventory.cpp
        CommandDebugTree.cpp
        CommandAlias.cpp
        GameObject.cpp
        CommandTake.cpp CommandPut.cpp
        CommandOpen.cpp
        ComponentHealth.cpp
        ComponentGameObject.cpp
        Component.cpp
        ComponentLock.cpp
        ComponentMessager.cpp)

include_directories(includes)
