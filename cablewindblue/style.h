const char Style[] PROGMEM = R"=====( 
@import url('https://fonts.googleapis.com/css2?family=Orbitron:wght@500&display=swap');

body {
    background-image: url('https://wallpaper.dog/large/5488941.jpg');
    background-repeat: no-repeat;
    background-size: cover;
    background-position: center;
    background-attachment: fixed;
    background-color: #000000;
    font-family: 'Orbitron', sans-serif;
    color: #87C1CE;
    margin: 0;
    padding: env(safe-area-inset-top) env(safe-area-inset-right) env(safe-area-inset-bottom) env(safe-area-inset-left);
    display: flex;
    flex-direction: column;
    align-items: center;
    overflow-x: hidden;
}

/* HIDE MENU CHECKBOX */
#menu input[type="checkbox"] {
    appearance: none;
    -webkit-appearance: none;
    display: none !important;
    width: 0;
    height: 0;
    margin: 0;
    padding: 0;
    opacity: 0;
    pointer-events: none;
    position: absolute;
    left: -9999px;
}

/* NAV MENU */
#menu {
    background: rgba(0, 0, 0, 0.7);
    color: #FFFFFF;
    height: auto;
    padding: 10px;
    border-radius: 5px;
    font-size: 17px;
    width: 100%;
    max-width: 1000px;
    box-shadow: 0 2px 5px rgba(135, 193, 206, 0.2);
    position: sticky;
    top: 0;
    z-index: 100;
}

#menu ul {
    display: flex;
    flex-wrap: wrap;
    justify-content: center;
    list-style: none;
    padding: 0;
    margin: 0;
}

#menu li {
    margin: 5px 10px;
}

#menu a {
    color: #87C1CE;
    text-decoration: none;
    padding: 8px 12px;
    text-shadow: 0 0 5px #87C1CE, 0 0 10px #87C1CE;
}

#menu a:hover {
    color: #FFF;
    text-shadow: 0 0 20px #87C1CE, 0 0 30px #87C1CE;
}

/* STATUS */
.status-indicator {
    width: 12px;
    height: 12px;
    border-radius: 50%;
    display: inline-block;
    margin-left: 10px;
    transition: background-color 0.3s;
}
.status-online {
    background-color: #34C759;
    box-shadow: 0 0 5px #34C759;
}
.status-offline {
    background-color: #FF3B30;
    box-shadow: 0 0 5px #FF3B30;
}

/* CONTAINERS */
.stat-container, .switch-container, .payload-container {
    display: flex;
    flex-direction: column;
    align-items: center;
    width: 95%;
    max-width: 1000px;
    margin: 10px auto;
}

.stat-group, .switch-group, .payload-container li {
    background-color: rgba(135, 193, 206, 0.1);
    border: 1px solid #87C1CE;
    border-radius: 13px;
    padding: 15px 20px;
    margin: 10px;
    width: 90%;
    max-width: 300px;
    color: #87C1CE;
    box-shadow: 0 2px 8px rgba(135, 193, 206, 0.2);
}

/* SWITCHES */
.switch-label {
    font-size: 17px;
    font-weight: 600;
    margin-left: 5px;
    color: #87C1CE;
}

.switch {
    position: relative;
    display: inline-block;
    width: 60px;
    height: 31px;
    margin-left: 10px;
}

.switch input {
    opacity: 0;
    width: 0;
    height: 0;
}

.slider {
    position: absolute;
    cursor: pointer;
    top: 0; left: 0; right: 0; bottom: 0;
    background-color: #333;
    transition: .4s;
    border-radius: 31px;
}

.slider:before {
    content: "";
    position: absolute;
    height: 27px;
    width: 27px;
    left: 2px;
    bottom: 2px;
    background-color: white;
    transition: .4s;
    border-radius: 50%;
}

input:checked + .slider {
    background-color: #87C1CE;
}
input:checked + .slider:before {
    transform: translateX(29px);
}

/* INPUTS */
textarea, input[type="text"], input[type="password"] {
    background-color: #111;
    color: #87C1CE;
    border: 1px solid #87C1CE;
    border-radius: 10px;
    padding: 10px;
    font-family: 'Orbitron', sans-serif;
    width: 100%;
    max-width: 100%;
    box-sizing: border-box;
    font-size: 16px;
}

.live-payload-container input[type="text"] {
    background-color: #111;
    color: #87C1CE;
    border: 2px solid #87C1CE;
    border-radius: 10px;
    padding: 20px;
    font-size: 24px;
    width: 100%;
    max-width: 90vw;
    box-sizing: border-box;
    text-align: center;
}

/* PAYLOAD PRE BLOCK */
.payload-container pre {
    background-color: #111;
    color: #87C1CE;
    padding: 10px;
    font-size: 16px;
    border-radius: 10px;
    border: 1px solid #87C1CE;
    overflow: auto;
    max-width: 100%;
}

/* BUTTONS */
.upload-button, button {
    background-color: rgba(135, 193, 206, 0.1);
    color: #87C1CE;
    border: 2px solid #87C1CE;
    border-radius: 10px;
    padding: 15px 25px;
    font-size: 18px;
    font-weight: 600;
    cursor: pointer;
    text-align: center;
    text-shadow: 0 0 5px #87C1CE;
    box-shadow: 0 0 10px rgba(135, 193, 206, 0.3);
    margin: 10px auto;
    display: block;
    width: fit-content;
}

.upload-button:hover, button:hover {
    background-color: #87C1CE;
    color: #FFFFFF;
    transform: scale(1.05);
    box-shadow: 0 0 20px rgba(135, 193, 206, 0.5);
}

/* MESSAGES */
.message {
    font-weight: 600;
    width: 90%;
    max-width: 400px;
    height: 36px;
    margin: 5px;
    background-color: rgba(135, 193, 206, 0.1);
    border: 1px solid #87C1CE;
    border-radius: 7px;
    display: flex;
    align-items: center;
    justify-content: center;
    color: #87C1CE;
}

/* MOBILE OVERRIDES */
@media screen and (max-width: 600px) {
    body {
        font-size: 14px;
    }

    #menu ul {
        flex-direction: column;
    }

    .stat-group, .switch-group, .payload-container li, .live-payload-container input[type="text"] {
        width: 95%;
    }

    .upload-button, button {
        font-size: 16px;
        padding: 12px 20px;
    }
}
)=====";
