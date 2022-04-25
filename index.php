<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<style>
    #list_item{
        cursor: pointer;
        margin: 20px;
    }
</style>
<body>
    <ul id="main_list"></ul>      
    <?php 
        $myfiles = array(); 
        $fileList = glob('Upload/*');
        foreach($fileList as $filename){
            if(is_file($filename)){
                array_push($myfiles,$filename);
            }   
        }
        $myfiles = json_encode($myfiles);
    ?>
</body>
<script>
    let domain_address = window.location.href;
    let dir_name = <?php echo $myfiles; ?>;
    function loadFile(filePath) {
        var result = null;
        var xmlhttp = new XMLHttpRequest();
        xmlhttp.open("GET", filePath, false);
        xmlhttp.send();
        if (xmlhttp.status==200) {
            result = xmlhttp.responseText;
        }
        return result;
    }
    function copyTextToClipboard(text,item) {
        if (!navigator.clipboard) {
            fallbackCopyTextToClipboard(text);
            return;
        }
        navigator.clipboard.writeText(text).then(function() {

            item.style.background = 'green';
        }, function(err) {
            item.style.background = 'red';

        });
    }
    Object.entries(dir_name).map(item => {
        let key = item[0];
        let value = item[1];
        let main_list = document.querySelector("#main_list");
        let child = document.createElement("li");
        child.innerHTML = value;
        child.id = "list_item";
        child.addEventListener("click",()=>{
            copyTextToClipboard(loadFile(domain_address + value),child) 
        });
        main_list.appendChild(child); 
    });
</script>
</html>