let namasteBtn = document.querySelector('button');
namasteBtn.addEventListener('click', inputMsg);

function inputMsg(){
    let name = prompt('Enter Name of Studetnt');
    namasteBtn.textContent = 'Roll NO. 1:' + name;


}