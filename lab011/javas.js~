function validate_username() {
  var x = myform.username.value;
  if (/\d/.test(x)){
    x = x.substring(0, x.length - 1);
    alert("Please do not enter numbers!");
    myform.username.value = x;
  }
  return(showHint(x));
}

function validate_password() {
  var x = myform.password.value.charAt(0);
  if (!(/^[a-zA-Z]/.test(x)) & x != ""){
    alert("First character must be a letter!");
    myform.password.value = "";
  }
}

function validate_form(){
  var username = myform.username.value;
  var password = myform.password.value;
  if ( username == "" ){
    alert("Username must not be emtpy");
    return;
  }
  else if ( password == "" ){
    alert("Password must not be emtpy");
    return;    
  }  
  
  else if ( password.length < 4 ){
    alert("Password must be at least 4 characters");    
    return;    
  }
  else{
    document.getElementById("after_validation").textContent = "You are logged in as: " + username;
  }
}

function showHint(str){
  var xmlhttp;
  if (str.length==0){
    document.getElementById("txtHint").innerHTML="";
    return;
  }
  if (window.XMLHttpRequest){// IE7+,Firefox,Chrome,Opera, Safari
    xmlhttp=new XMLHttpRequest();
  }
  else{// code for IE6, IE5
    xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
  }
  xmlhttp.onreadystatechange=function(){
    if (xmlhttp.readyState==4 && xmlhttp.status==200){
      document.getElementById("txtHint").innerHTML=xmlhttp.responseText;
    }
  }
  xmlhttp.open("GET","http://www.cs.bgu.ac.il/~barhay/suggest.php?q="+str,true);
  xmlhttp.send();
}