<!DOCTYPE html>
<html lang="pt-b">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aula API com Postman</title>
</head>
<body>
    <!-- Enviando dados para uma API usando Postman e PHP -->
    <h1>API Pública Postman</h1>
    <form action="resultado.php" method="POST"></form>
    <label for="titulo">Título:</label>
    <input type="text" name="titulo" id="titulo"></label>
    <br>
    <label for="corpo">Corpo:</label>
    <br>
    <textarea name="corpo" id="corpo"></textarea>
    <br>
    <label for="idUsuario">ID do Usuário:</label>
    <input type="number" name="idUsuario" id="idUsuario">
    <br>
    <br>
    <button type="submit">Enviar dados</button>
</body>
</html>