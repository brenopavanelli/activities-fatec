<?php
    $titulo = $_POST["titulo"];
    $corpo = $_POST["corpo"];
    $idUsuario = $_POST["idUsuario"];

    $apiUrl = "https://jsonplaceholder.typicode.com/posts";

    $dadosEnvio = [
        "title"=> $titulo,
        "body"=> $corpo,
        "userId"=> $idUsuario
    ];

    $curl = curl_init($apiUrl); 
    curl_setopt($curl, CURLOPT_POST, true);
    curl_setopt($curl, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($curl, CURLOPT_POSTFIELDS, json_encode($dadosEnvio, true));
    curl_setopt($curl, CURLOPT_HTTPHEADER, ["Content-Type: application/json"]);
    curl_setopt($curl, CURLOPT_SSL_VERIFYPEER, false); // Não recomendado, só é feito para driblar o certificado

    $response = curl_exec($curl);

    curl_close($curl);

    $dadosRetorno = json_decode($response, true);

    echo "<p> ID: {$dadosRetorno["id"]}</p>";
    echo "<p>Título: {$dadosRetorno["title"]}</p>";
    echo "<p>Corpo: {$dadosRetorno["body"]}</p>";
    echo "<p>ID do Usuário: {$dadosRetorno["userId"]}</p>";
0;