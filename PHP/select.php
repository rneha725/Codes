<?php
$servername="localhost";
$username="root";
$password="12345";
$dbname="hello";

$conn=new mysqli($servername,$username,$password,$dbname);

if($conn->connect_error)
{
	die("Connection Failed: " .$conn->connect_error);
}

//function shwo_balance()
{
	$sql="SELECT * FROM world";
	$result= $conn->query($sql);

	if($result->num_rows>0)
	{
		while($row=$result->fetch_assoc())
		{
			echo "Balance is: " .$row["rno"];
		}
	}

	else
	{
		echo "No results!!";
	}
}
$conn->close();

?>