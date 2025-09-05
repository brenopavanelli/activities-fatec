<?php
    $url = "https://api.chucknorris.io/jokes/random";

    $ch = curl_init();

    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER,true);
    curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);

    $response = curl_exec($ch);

    $dados = json_decode($response, true);

    curl_close($ch);

    echo $dados["value"];



?>

<br>
<button><a href="index.php">Voltar</a></button>