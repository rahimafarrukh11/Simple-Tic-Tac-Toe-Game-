<h2>Tic Tac Toe Game</h2>
<h3>Table of Contents</h3>
<ul>
        <li><a href="#introduction">Introduction</a></li>
        <li><a href="#live-preview">Live Preview</a></li>
        <li><a href="#features">Features</a></li>
        <li><a href="#game-instructions">Game Instructions</a></li>
        <li><a href="#file-structure">File Structure</a></li>
        <li><a href="#technology-used">Technology Used</a></li>
        <li><a href="#code-explanation">Code Explanation</a></li>
        <li><a href="#future-improvements">Future Improvements</a></li>
        <li><a href="#conclusion">Conclusion</a></li>
</ul>

<h2 id="introduction">Introduction</h2>
    <p>
      Welcome to the Tic Tac Toe game implemented in C++. This project features a simple, interactive console-based version of the classic Tic Tac Toe game where two players can compete against each other. The game is designed to be straightforward and user-friendly, providing an engaging experience for players of all ages.
    </p>

<h2 id="live-preview">Live Preview</h2>
    <p>
      As this is a console application, a live preview of the game can be experienced by compiling and running the code on your local machine. The game interface and interactions are shown directly in the command line.
    </p>

<h2 id="features">Features</h2>
    <ul>
        <li><strong>Two-Player Mode</strong>: Play against another person on the same computer.</li>
        <li><strong>Interactive Console Interface</strong>: Provides an easy-to-use text-based interface.</li>
        <li><strong>Game Board Display</strong>: Clearly visualizes the board with player moves.</li>
        <li><strong>Win Detection</strong>: Automatically checks and announces the winner.</li>
        <li><strong>Draw Detection</strong>: Identifies when the game ends in a draw due to a full board.</li>
    </ul>

<h2 id="game-instructions">Game Instructions</h2>
    <ol>
        <li><strong>Start the Game</strong>: Compile and run the game.</li>
        <li><strong>Player Setup</strong>: Enter names for Player 1 and Player 2.</li>
        <li><strong>Playing</strong>: Players take turns entering a number (1-9) to place their symbol (X or O) on the board.</li>
        <li><strong>Winning</strong>: The game checks for a win after each move.</li>
        <li><strong>Draw</strong>: If the board is full and no player has won, the game declares a draw.</li>
        <li><strong>Replay</strong>: To play again, restart the application.</li>
    </ol>

<h2 id="file-structure">File Structure</h2>
    <ul>
        <li><strong><code>main.cpp</code></strong>: Implements functions for displaying the game board and checking game status, contains the <code>main</code> function, game loop, and logic for handling player turns.</li>
    </ul>

<h2 id="technology-used">Technology Used</h2>
    <ul>
        <li><strong>Programming Language</strong>: C++</li>
        <li><strong>Development Environment</strong>: Visual Studio</li>
    </ul>

<h2 id="code-explanation">Code Explanation</h2>
    <ul>
        <li><strong><code>main.cpp</code></strong>: Manages the game flow, including player turns, input validation, and checking game status. It handles the game loop and switches between players.</li>
        <li><strong><code>board.cpp</code></strong>: Provides implementations for displaying the game board and checking for win/draw conditions. It includes functions like <code>displayBoard</code>, <code>checkWin</code>, and <code>checkDraw</code>.</li>
        <li><strong><code>board.h</code></strong>: Declares the functions used in <code>board.cpp</code>, allowing for modular code organization and easy inclusion.</li>
    </ul>

<h2 id="future-improvements">Future Improvements</h2>
    <ul>
        <li><strong>Graphical User Interface</strong>: Develop a graphical interface using a library such as SFML or SDL.</li>
        <li><strong>AI Opponent</strong>: Implement an AI opponent to allow single-player mode.</li>
        <li><strong>Network Play</strong>: Enable online play between two different computers.</li>
        <li><strong>Enhanced Validation</strong>: Improve input validation and error handling.</li>
    </ul>
    
<h2 id="conclusion">Conclusion</h2>
    <p>This Tic Tac Toe game is a simple yet effective demonstration of console-based C++ programming. It serves as a great starting point for those interested in game development and interactive applications. Future enhancements could further enrich the gameplay experience and broaden its functionality.</p>
