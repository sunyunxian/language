let i = 1;
console.log(i);
j = i++;
console.log("k", j);
i = 1;
k = ++i;
console.log("k", k);

i = k == 2 ? "yes" : "No";
console.log("i", i);

let score = 59;

if (score >= 60) {
    console.log("Pass");
} else {
    console.log("Fail");
}

let rst = score >= 60 ? "Pass" : "Fail";
console.log(rst);
