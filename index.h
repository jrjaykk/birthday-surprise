<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Something For You ❤️</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>

    <!-- PASSWORD SCREEN -->
    <section id="lockScreen" class="screen">
        <div class="lock-card">
            <div class="lock">🔐</div>

            <p class="tiny">A LITTLE SECRET</p>

            <h1>This is only for you ❤️</h1>

            <p>
                Someone spent some time making this.
                <br>
                So obviously, there's a secret password. 😌
            </p>

            <input
                type="password"
                id="password"
                placeholder="Enter our secret..."
                onkeydown="if(event.key === 'Enter') unlock()"
            >

            <button onclick="unlock()">
                Unlock My Surprise 💌
            </button>

            <p id="wrong"></p>
        </div>
    </section>


    <!-- MAIN WEBSITE -->
    <main id="website" class="hidden">

        <div class="container">

            <p class="tiny">FINALLY, YOU'RE HERE ✨</p>

            <h1>Happy Birthday, My Love ❤️</h1>

            <p class="subtitle">
                I could've just texted you "Happy Birthday"...
                <br>
                but you're worth opening VS Code for. 😌
            </p>


            <!-- SURPRISE 1 -->
            <section class="surprise active" id="surprise1">

                <div class="number">01</div>

                <h2>A Little Letter 💌</h2>

                <div class="letter">
                    <p>Happy Birthday meri jaan ❤️</p>

                    <p>
                        I don't think words will ever be enough
                        to explain how special you are to me.
                    </p>

                    <p>
                        Thank you for being a part of my life,
                        for making me smile and for making even
                        normal days feel a little more special.
                    </p>

                    <p>
                        I hope this year brings you happiness,
                        success, peace and everything you've
                        been wishing for.
                    </p>

                    <p class="special">
                        You deserve more than just a birthday text.
                        <br><br>
                        So I made you a little corner of the internet. ❤️
                    </p>
                </div>

                <button onclick="nextSurprise(2)">
                    Open Surprise 2 💖
                </button>

            </section>


            <!-- SURPRISE 2 -->
            <section class="surprise" id="surprise2">

                <div class="number">02</div>

                <h2>Our Little Memories 📸</h2>

                <p class="hint">
                    Some of my favourite moments with you.
                </p>

                <div class="gallery">

                    <div class="photo">
                        <img src="assets/photo1.jpg" alt="Our memory">
                    </div>

                    <div class="photo">
                        <img src="assets/photo2.jpg" alt="Our memory">
                    </div>

                    <div class="photo">
                        <img src="assets/photo3.jpg" alt="Our memory">
                    </div>

                    <div class="photo">
                        <img src="assets/photo4.jpg" alt="Our memory">
                    </div>

                </div>

                <button onclick="nextSurprise(3)">
                    Open Surprise 3 🎵
                </button>

            </section>


            <!-- SURPRISE 3 -->
            <section class="surprise" id="surprise3">

                <div class="number">03</div>

                <h2>Our Song 🎵</h2>

                <div class="big-emoji">🎧</div>
                <p>
                    Every relationship has that one song
                    that somehow feels a little more special.
                </p>

                <p class="special">
                    This one reminds me of us. ❤️
                </p>

                <div class="music-box">
                    🎶 Our Song 🎶
                    <br>
                    <small>Add your song here later</small>
                </div>

                <button onclick="nextSurprise(4)">
                    Open Surprise 4 💕
                </button>

            </section>


            <!-- SURPRISE 4 -->
            <section class="surprise" id="surprise4">

                <div class="number">04</div>

                <h2>Things I Love About You 🥹</h2>

                <div class="reasons">

                    <p>❤️ Your smile</p>
                    <p>❤️ The way you make me laugh</p>
                    <p>❤️ Your little habits</p>
                    <p>❤️ The way you care</p>
                    <p>❤️ Your presence</p>
                    <p>❤️ Your beautiful heart</p>
                    <p>❤️ The way you understand me</p>
                    <p>❤️ Simply... you being you</p>

                </div>

                <button onclick="nextSurprise(5)">
                    Open Surprise 5 💗
                </button>

            </section>


            <!-- SURPRISE 5 -->
            <section class="surprise" id="surprise5">

                <div class="number">05</div>

                <h2>Our Best Moments ✨</h2>

                <div class="memory-card">

                    <div class="big-emoji">🌙</div>

                    <p>
                        The funny conversations.
                    </p>

                    <p>
                        The random laughs.
                    </p>

                    <p>
                        The little moments nobody else knows about.
                    </p>

                    <p class="special">
                        Somehow, those little moments became
                        some of my favourite memories. ❤️
                    </p>

                </div>

                <button onclick="nextSurprise(6)">
                    Open Surprise 6 🌷
                </button>

            </section>


            <!-- SURPRISE 6 -->
            <section class="surprise" id="surprise6">

                <div class="number">06</div>

                <h2>A Little Promise 🤝</h2>

                <div class="letter">

                    <p>
                        I can't promise that every day will
                        be perfect.
                    </p>

                    <p>
                        But I can promise that I'll always
                        appreciate the little things.
                    </p>

                    <p>
                        I'll keep cheering for you,
                        supporting you and annoying you
                        whenever necessary. 😌
                    </p>

                    <p class="special">
                        And I'll always be grateful
                        that our paths crossed. ❤️
                    </p>

                </div>

                <button onclick="nextSurprise(7)">
                    Open Surprise 7 🧩
                </button>

            </section>


            <!-- SURPRISE 7 -->
            <section class="surprise" id="surprise7">

                <div class="number">07</div>

                <h2>Guess What? 👀</h2>

                <p>
                    What do you think I like the most about you?
                </p>

                <div class="choices">

                    <button onclick="wrongAnswer()">
                        Your smile 😍
                    </button>

                    <button onclick="wrongAnswer()">
                        Your voice 🥹
                    </button>

                    <button onclick="rightAnswer()">
                        Everything ❤️
                    </button>

                </div>
                <p id="gameMessage"></p>

            </section>


            <!-- SURPRISE 8 -->
            <section class="surprise" id="surprise8">

                <div class="number">08</div>

                <h2>If We Were Together Right Now 🌙</h2>

                <div class="letter">

                    <p>
                        I'd probably look at you for a few seconds
                        without saying anything.
                    </p>

                    <p>
                        Then I'd smile and say...
                    </p>

                    <p class="special big-text">
                        "Happy Birthday, idiot. ❤️"
                    </p>

                    <p>
                        And then we'd probably spend the rest
                        of the day laughing about something completely random.
                    </p>

                </div>

                <button onclick="nextSurprise(9)">
                    Open Surprise 9 💌
                </button>

            </section>


            <!-- SURPRISE 9 -->
            <section class="surprise" id="surprise9">

                <div class="number">09</div>

                <h2>One More Message 💖</h2>

                <div class="letter">

                    <p>
                        If you ever forget how loved you are,
                        come back to this page.
                    </p>

                    <p>
                        Read this again.
                    </p>

                    <p>
                        Look at our memories.
                    </p>

                    <p>
                        And remember that somewhere in this
                        huge internet, there's a tiny website
                        that exists only because you matter to me.
                    </p>

                    <p class="special">
                        Happy Birthday, my favourite person. ❤️
                    </p>

                </div>

                <button onclick="nextSurprise(10)">
                    The Final Surprise 🎁
                </button>

            </section>


            <!-- SURPRISE 10 -->
            <section class="surprise" id="surprise10">

                <div class="number">10</div>

                <h2>The Final Surprise ❤️</h2>

                <div class="big-heart">
                    ❤️
                </div>

                <h2>
                    You're my favourite person.
                </h2>

                <p>
                    And yes...
                </p>

                <p class="special">
                    I actually coded this for you. 🥹❤️
                </p>

                <p>
                    Happy Birthday once again.
                    <br>
                    I hope you always keep smiling.
                </p>

                <div class="final-message">
                    Made with ❤️ + a little bit of code
                </div>

            </section>

        </div>

    </main>

    <script src="script.js"></script>

</body>
</html>
