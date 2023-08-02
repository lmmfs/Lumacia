#!/bin/bash

# Change to the engine directory and run build.sh
echo "Building engine..."
cd engine
./build.sh

# Return to the root directory
cd ..

# Change to the sandbox directory and run build.sh
echo "Building sandbox..."
cd sandbox
./build.sh

# Return to the root directory
cd ..

echo "Build process completed successfully."
