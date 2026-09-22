const SECRET_PASSWORD = "jarry2313";


function unlock() {

    const input =
        document.getElementById("password").value;


    const wrong =
        document.getElementById("wrong");


    if (input === SECRET_PASSWORD) {


        document.getElementById("lockScreen")
            .style.display = "none";


        document.getElementById("website")
            .classList.remove("hidden");


        createHearts();


    }

    else {


        const messages = [

            "Hmm... try again 😏",

            "Nope 😂 You know the password!",

            "Wrong one, jaan 😌",

            "Nice try 👀",

            "Think about us ❤️"

        ];


        wrong.innerText =
            messages[
                Math.floor(
                    Math.random() *
                    messages.length
                )
            ];


        document.getElementById("password")
            .value = "";

    }

}



function showFinal() {

    document.getElementById("final")
        .classList.remove("hidden");


    createHearts();

}



function createHearts() {

    for (
        let i = 0;
        i < 35;
        i++
    ) {


        const heart =
            document.createElement("div");


        heart.className = "heart";


        heart.innerText =
            [
                "❤️",
                "💖",
                "💕",
                "💗",
                "💓"
            ][
                Math.floor(
                    Math.random() * 5
                )
            ];


        heart.style.left =
            Math.random() * 100 + "vw";


        heart.style.animationDuration =
            (
                4 +
                Math.random() * 4
            ) + "s";


        heart.style.animationDelay =
            Math.random() * 2 + "s";


        document.body.appendChild(heart);


        setTimeout(() => {

            heart.remove();

        }, 9000);

    }

}
