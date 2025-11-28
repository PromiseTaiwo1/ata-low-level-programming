#!/bin/bash

echo "Starting a background sleep process..."
sleep 60 &
SLEEP_PID=$!

echo "Sleep process started with PID: $SLEEP_PID"

echo "Killing process $SLEEP_PID..."
kill "$SLEEP_PID"

# Give the system a moment to terminate it
sleep 1

# Check if it's gone
if ps -p "$SLEEP_PID" > /dev/null; then
    echo "Process $SLEEP_PID is still running. Attempting force kill..."
    kill -9 "$SLEEP_PID"
            
    if ps -p "$SLEEP_PID" > /dev/null; then
        echo "Process $SLEEP_PID could not be terminated."
    else
        echo "Process $SLEEP_PID forcefully terminated."
    fi
else
    echo "Process $SLEEP_PID terminated."
fi
