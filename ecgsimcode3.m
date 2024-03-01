pkg load instrument-control

% Open serial connection to Arduino Nano
s = serial("\\\\.\\COM5"); % Replace "COM5" with the appropriate COM port
set(s, "baudrate", 9600); % Set baud rate to match Arduino code
fopen(s);

% Continuously generate and send signal to Arduino
while true
    % Generate a sine wave signal
    t = linspace(0, 1, 1000); % Time vector from 0 to 1 second
    signal = sin(2 * pi * 10 * t); % Example sine wave signal with frequency 10 Hz

    % Convert signal to bytes (0-255 range) for Arduino
    signal_bytes = uint8(round((signal + 1) * 127.5)); % Scale signal to 0-255 range

    % Send signal to Arduino Nano
    fwrite(s, signal_bytes, "uint8");

    % Pause for a short duration to control the rate of signal generation
    pause(0.1); % Adjust the pause duration as needed
end

% Close serial connection
fclose(s);






