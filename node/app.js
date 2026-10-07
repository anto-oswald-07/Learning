import express from 'express';
const PORT = 6969;
const app = express();

app.get("/anto",function (request, response){
    response.send("<h6>Ozzy the goat</h6>");
});

function server(){
    console.log(`Server running on port ${PORT}`);
}

app.listen(PORT,server);