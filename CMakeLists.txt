# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project(StrategyGame)

# Create a sources variable with a link to all cpp files to compile
file(GLOB SOURCES
	"src/*.cpp"
)

# Add an executable with the above sources
add_executable(strategy_game ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(strategy_game
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

# Linkando bibliotecas do SFML
# Isso é equivalente a:
# -lsfml-graphics -lsfml-window -lsfml-system
target_link_libraries(
	strategy_game
	PRIVATE
	sfml-graphics 
	sfml-window 
	sfml-system
	)





