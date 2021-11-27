var score = 75 ;
var msg ;

if (score >= 50){
    msg = 'Conggratulations !';
    msg += 'Proceed to the next roud.';

}
var el = document.getElementById('answer');
el.textContent = msg;