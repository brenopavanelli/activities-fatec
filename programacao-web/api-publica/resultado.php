<?php
    $pokemon = $_POST["pokemon"];

    $url = "https://pokeapi.co/api/v2/pokemon/$pokemon";

    $ch = curl_init();

    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER,true);
    curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);

    $response = curl_exec($ch);

    $dados = json_decode($response, true);

    curl_close($ch);

    echo "<h1>Detalhes do Pokemon</h1>";
    echo "Número:". $dados["id"] ."<br>";
    echo "Nome: ". $dados["name"] ."<br>";
    echo "Tipo: ". $dados["types"][0]["type"]["name"] ."<br>";
    echo "<img src='".$dados["sprites"]["front_default"]."'/>";


?>

<br>
<button><a href="index.php">Voltar</a></button>