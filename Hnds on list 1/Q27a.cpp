/*
============================================================================
Name : 27a.c
Author : Shivani Sanjiv Shukla
Description :Write a program to execute ls -Rl by the following system calls
a. execl
Date: 31st Aug, 2024.
============================================================================
*/


#include<iostream>
#include<unistd.h>
using namespace std;
int main ()
{
	cout<< "Executing'ls -R1' using execl...";
	execl("/bin/ls","ls","-R1",nullptr);
	cerr<<"Failed! " ;
	return 1;
}
/*
 * output
 * shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ g++ Q27a.cpp
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ ./a.out
.:
]
a.cpp
a.out
'cd ..'
'cd ...pub'
code
Desktop
Documents
Downloads
dup_exmp1.txt
env-vars
exe
exec
exmp1
exmp3.c
file
File10.txt
File11.txt
file2.c
file2.txt
Five.txt
Four.txt
he
hey.sh
Music
One.txt
Output.txt
path.cpp
path.txt
Pictures
Pragati2501
Pragati25012
Pragati25012.pub
Pragati2501.pub
Public
Q10.cpp
Q11.cpp
Q12.cpp
Q13.cpp
Q14.cpp
Q15.cpp
Q16a.cpp
Q16b.cpp
Q17a.cpp
Q17b.cpp
Q18a.cpp
Q18createrecord.cpp
Q18r_lck.cpp
Q18w_lck.cpp
Q19.cpp
Q1a.c
Q1b.cpp
Q1c.c
Q1c.cpp
Q20.cpp
Q21.cpp
Q22.cpp
Q23.cpp
Q24.cpp
Q25.cpp
Q26b.cpp
Q26.c
Q26.cpp
Q26_tar.c
Q272.cpp
Q273.cpp
Q274.cpp
Q275.cpp
Q27a.cpp
Q28.cpp
q29.cpp
Q2.c
Q30.c
Q30.cpp
Q3.cpp
Q3.txt
Q4.cpp
Q4.txt
Q5.cpp
Q6.cpp
Q7
Q7.cpp
Q8
Q8.cpp
Q9.cpp
readf
Rec.dat
sample
snap
ss
target.txt
Templates
test.txt
Three.txt
Two.txt
Videos

./code:

./Desktop:
'Algo practice sheet.pdf'
CandidateFeeStatus_NIT2415809.pdf
domjudge_Qs
exampls.txt
'Linux imp code.odt'
'lock choices of utkarsh'
MT2024146
MT2024146.pdf
My_Resume-1.pdf
My_Resume-2.pdf
My_Resume.pdf
'New Folder'
'Sanjiv Shukla income-1.pdf'
'Shivani Sanjiv Shukla'
'Shivani Sanjiv Shukla.pdf'
'Shivani Shukla.odg'
'Shivani Shukla.pdf'
'Shivani Shukla Resume.docx'
'Shivani Shukla Resume.docx - hit and try resume-2.pdf'
'Shivani Shukla Resume.odg'
'Shivani Shukla Resume.pdf'
'Shiv Resume.pdf'
'Utkarsh offer letter.pdf'
'Utkarsh Sanjiv Shukla EWS.pdf'

./Desktop/domjudge_Qs:
__MACOSX
'prob-Digit Frequency.pdf'
'prob-Kth Largest Number.pdf'
'prob-Lagged Fibo Sequence.pdf'
'prob-Lattice Points Count.pdf'

./Desktop/domjudge_Qs/__MACOSX:

./Desktop/MT2024146:
Q10.cpp
Q11.cpp
Q12.cpp
Q13.cpp
Q14.cpp
Q15.cpp
Q16a.cpp
Q16b.cpp
Q17a.cpp
Q17b.cpp
Q18a.cpp
Q19.cpp
Q1a.c
Q1b.cpp
Q1c.c
Q20.cpp
Q21.cpp
Q22.cpp
Q23.cpp
Q24.cpp
Q25.cpp
Q26.c
Q2.c
Q30.c
Q3.cpp
Q3.txt
Q4.cpp
Q4.txt
Q6.cpp
Q7.cpp
Q8.cpp
Q9.cpp

'./Desktop/New Folder':

./Documents:

./Downloads:
'10th marksheet utkarsh-1.pdf'
'10th marksheet utkarsh-2.pdf'
'10th marksheet utkarsh_compressed-1.pdf'
'10th marksheet utkarsh_compressed_compressed.pdf'
'10th marksheet utkarsh_compressed.pdf'
'10th marksheet utkarsh.pdf'
'11 Ann 5 Academic Integrity Policy IIITB_Draft V4 Senate-1 (1).pdf'
'12th marksheet.odg'
12th.pdf
2022_Placement_Committee___Resume_Template_Type_1.docx
2022_Placement_Committee___Resume_Template_Type_1.odg
2022_Placement_Committee___Resume_Template_Type_1.pdf
2022_Placement_Committee___Resume_Template_Type_3.pdf
20240815_114423.mp4
368217602914948-1.pdf
368217602914948.pdf
'541ebe7427a54888b7c007d546614250 (1).mov'
'541ebe7427a54888b7c007d546614250 (2).mov'
541ebe7427a54888b7c007d546614250.mov
60558.pdf
649EFCE0-25CE-41F6-8B56-318936D34FD0.jpg
718B64F9-D395-4A6C-A834-536E996FE016.jpg
84FC75C3-696B-4A92-8CC9-20F5159EFCA5.jpg
Algo24Aug14.pdf
Algo24Aug5.pdf
Algo24Aug7.pdf
Algo24.pdf
Algo_PS1.pdf
AlgoPS_8-11.pdf
'Algorithms Content-1.pdf'
'Algorithms Content.pdf'
'all three year gatescore-1.pdf'
'all three year gatescore-2.pdf'
'all three year gatescore.pdf'
'Application for navyoday.pdf'
'Application of utkarsh.pdf'
'ATS COMPATIBLE RESUME FORMAT(1).docx'
'ATS COMPATIBLE RESUME FORMAT.docx'
'bABY ADHAAR CARD'
BE_Marsheets.pdf
CandidateFeeStatus_NIT2415809.pdf
Cllg_ID.pdf
CS24S62075107_ScoreCard.pdf
C++_STL.pdf
delhi-bus-routes.kml
delhi_traffic_signals.kml
DM3.pdf
DM4.pdf
DM-5.pdf
'DM(Sets)2.pdf'
'DocScanner 10-Jul-2024 00-33.pdf'
'DocScanner 17-Jun-2024 19-38-1.pdf'
'DocScanner 17-Jun-2024 19-38-2.pdf'
'DocScanner 17-Jun-2024 19-38.pdf'
'DocScanner 17-Jun-2024 20-03.pdf'
'DocScanner 29-Jul-2024 23-45-1.pdf'
'DocScanner 29-Jul-2024 23-45.pdf'
'DocScanner 29-Jul-2024 23-47-1.pdf'
'DocScanner 29-Jul-2024 23-47-2.pdf'
'DocScanner 29-Jul-2024 23-47.pdf'
'DocScanner Aug 17, 2024 13-59-1.pdf'
'DocScanner Aug 6, 2024 16-29.pdf'
'DocScanner Jul 27, 2024 14-20.pdf'
'DocScanner Jul 27, 2024 14-26.pdf'
domjudge_Qs.zip
EAadhaar_0000001924126720240221062205_19082024122755.pdf
EAadhaar_0229270320116520221205170219_27072024203634.pdf
'Finance for Engineers.pdf'
Flipkart_assigned_rooms.xlsx
Git.pdf
google-chrome-stable_current_amd64.deb
'graduation passing certificate -1.pdf'
'graduation passing certificate .pdf'
'Hands-on List 1-1.pdf'
'Hands-on List 1-2.pdf'
'Hands-on List 1-3.pdf'
'Hands-on List 1-4.pdf'
'Hands-on List 1-5.pdf'
'Hands-on List 1.pdf'
'Hands-on List II.pdf'
'hit and try resume-1.pdf'
'hit and try resume-2.pdf'
'hit and try resume.pdf'
'idof utkarsh_compressed.pdf'
'idof utkarsh.pdf'
'IIIT Bangalore - Summer Internship - Online Assessment Shortlist - 2026 Batch - 2 Sept 2024.xls'
IMG_6435.HEIC
IMG_6437.HEIC
IMG_6439.HEIC
IMG_6440.HEIC
IMG_6441.HEIC
IMG_6442.HEIC
IMG_6444.HEIC
IMG_6450.HEIC
IMG_6452.HEIC
IMG_6453.HEIC
IMG_6463.MOV
IMG_6465.HEIC
IMG_6466.HEIC
IMG_6467.HEIC
IMG_6469.HEIC
IMG_6470.HEIC
IMG_6473.HEIC
IMG_6474.HEIC
IMG_6475.HEIC
IMG_6481.HEIC
IMG_6488.HEIC
IMG_6489.HEIC
IMG_6492.HEIC
lec1.pdf
Lecture_Plan_MathML_Part_1_Aug24.pdf
LinuxBasicCommands.pdf
Machine_Learning_2024_Class1.pdf
Machine_Learning_2024_Class2-1.pdf
Machine_Learning_2024_Class2.pdf
Machine_Learning_2024_Class3-1.pdf
Machine_Learning_2024_Class3-2.pdf
Machine_Learning_2024_Class3-3.pdf
Machine_Learning_2024_Class3.pdf
Machine_Learning_2024_Class4-1.pdf
Machine_Learning_2024_Class4-2.pdf
Machine_Learning_2024_Class4-3.pdf
Machine_Learning_2024_Class4.pdf
Machine_Learning_2024_Class5-1.pdf
Machine_Learning_2024_Class5-2.pdf
Machine_Learning_2024_Class5.pdf
Machine_Learning_2024_Class6-1.pdf
Machine_Learning_2024_Class6.pdf
Machine_Learning_2024_Class7.pdf
Machine_Learning_2024_Class8.pdf
'MCA FEE STRUCTURE 2024-25 Regular.pdf'
ML_midterm_project_requirements.pdf
MT2023161-1.pdf
MT2023161.pdf
MT2024146.pdf
My_Resume-1.pdf
My_Resume-2.pdf
My_Resume-3.pdf
My_Resume-4.pdf
My_Resume-5.pdf
My_Resume-6-1.pdf
My_Resume-6.pdf
My_Resume.pdf
'old resume.pdf'
'Preptemschedule2024(1).xlsx'
'Preptemschedule2024(2).xlsx'
'Preptemschedule2024(3).xlsx'
'Preptemschedule2024(4).xlsx'
'Preptemschedule2024(5).xlsx'
Preptemschedule2024.xlsx
PrepTermMtechECE2024-v2.pdf
ProblemSet1-1.pdf
ProblemSet1-2.pdf
ProblemSet1-3.pdf
ProblemSet1-4.pdf
ProblemSet1-5.pdf
ProblemSet1-6.pdf
ProblemSet1-7.pdf
ProblemSet1.pdf
Roomallocation.xlsx
sample1722408179486.pdf
'Sanjiv Shukla income_11zon.pdf'
'Sanjiv Shukla income-1_compressed.pdf'
'Sanjiv Shukla income-1.pdf'
'Sanjiv Shukla income.pdf'
'Semester wise result pdf-1.pdf'
'Semester wise result pdf-2.pdf'
'Semester wise result pdf_compressed_11zon.pdf'
'Semester wise result pdf_compressed-1.pdf'
'Semester wise result pdf_compressed-2.pdf'
'Semester wise result pdf_compressed-3.pdf'
'Semester wise result pdf_compressed.pdf'
'Semester wise result pdf.pdf'
'Shivani Adhaar Card.pdf'
'Shivani Shukla Resume-1.pdf'
'Shivani Shukla Resume-2.pdf'
'Shivani Shukla Resume-3.pdf'
'Shivani Shukla Resume.pdf'
'SIH2024_IDEA_Presentation_Format(1).pptx'
'SIH2024_IDEA_Presentation_Format(2).pptx'
SIH2024_IDEA_Presentation_Format.pptx
SS.pdf
ThoughtSpot_AssignedRooms.xlsx
'to be submitted.pdf'
Tutorial_01.ipynb
'Unipage Calendar 2024 (4).pdf'
'Utkarsh Sanjiv Shukla EWS_compressed.pdf'
'Utkarsh Sanjiv Shukla EWS.pdf'
'Utkarsh Score Card-1.pdf'
'Utkarsh Score Card_compressed-1.pdf'
'Utkarsh Score Card_compressed.pdf'
'Utkarsh Score Card.pdf'
vmls.pdf
'WhatsApp Image 2024-06-17 at 19.23.29(1).jpeg'
'WhatsApp Image 2024-06-17 at 19.23.29.jpeg'
'WhatsApp Image 2024-07-30 at 10.41.30(1).jpeg'
'WhatsApp Image 2024-08-17 at 13.56.17(1).jpeg'
'WhatsApp Image 2024-08-17 at 13.56.17.jpeg'
'WhatsApp Image 2024-08-19 at 15.40.38.jpeg'

./Music:

./Pictures:
Screenshots

./Pictures/Screenshots:
'Screenshot from 2024-07-14 17-48-11.png'
'Screenshot from 2024-07-14 18-15-25.png'
'Screenshot from 2024-07-16 22-27-21.png'
'Screenshot from 2024-07-18 05-42-45.png'
'Screenshot from 2024-07-18 18-06-04.png'
'Screenshot from 2024-07-18 18-50-27.png'
'Screenshot from 2024-07-18 18-51-11.png'
'Screenshot from 2024-07-18 18-53-40.png'
'Screenshot from 2024-07-18 20-10-41.png'
'Screenshot from 2024-07-20 19-55-34.png'
'Screenshot from 2024-07-20 19-56-34.png'
'Screenshot from 2024-07-20 19-56-50.png'
'Screenshot from 2024-07-20 20-36-58.png'
'Screenshot from 2024-07-20 21-01-22.png'
'Screenshot from 2024-07-20 23-57-26.png'
'Screenshot from 2024-07-20 23-58-08.png'
'Screenshot from 2024-07-21 00-02-20.png'
'Screenshot from 2024-07-21 01-04-21.png'
'Screenshot from 2024-07-21 01-05-13.png'
'Screenshot from 2024-07-21 09-55-21.png'
'Screenshot from 2024-07-21 09-56-54.png'
'Screenshot from 2024-07-21 09-57-39.png'
'Screenshot from 2024-07-21 10-01-27.png'
'Screenshot from 2024-07-21 10-06-38.png'
'Screenshot from 2024-07-21 10-14-43.png'
'Screenshot from 2024-07-21 17-33-52.png'
'Screenshot from 2024-07-21 17-34-35.png'
'Screenshot from 2024-07-22 09-41-54.png'
'Screenshot from 2024-07-22 10-16-26.png'
'Screenshot from 2024-07-22 10-17-29.png'
'Screenshot from 2024-07-22 11-50-32.png'
'Screenshot from 2024-07-22 13-16-00.png'
'Screenshot from 2024-07-22 18-31-20.png'
'Screenshot from 2024-07-22 18-33-13.png'
'Screenshot from 2024-07-25 10-23-09.png'
'Screenshot from 2024-07-25 13-57-09.png'
'Screenshot from 2024-07-25 14-50-48.png'
'Screenshot from 2024-07-25 15-57-10.png'
'Screenshot from 2024-07-25 18-26-56.png'
'Screenshot from 2024-07-25 22-57-58.png'
'Screenshot from 2024-07-25 23-02-08.png'
'Screenshot from 2024-07-25 23-02-42.png'
'Screenshot from 2024-07-27 20-48-36.png'
'Screenshot from 2024-07-27 20-48-58.png'
'Screenshot from 2024-07-27 20-49-27.png'
'Screenshot from 2024-07-27 20-49-43.png'
'Screenshot from 2024-07-29 19-28-13.png'
'Screenshot from 2024-07-29 22-48-32.png'
'Screenshot from 2024-07-29 23-06-09.png'
'Screenshot from 2024-07-29 23-07-13.png'
'Screenshot from 2024-07-29 23-21-52.png'
'Screenshot from 2024-07-29 23-24-54.png'
'Screenshot from 2024-07-29 23-30-30.png'
'Screenshot from 2024-07-29 23-50-39.png'
'Screenshot from 2024-07-29 23-59-43.png'
'Screenshot from 2024-07-30 00-00-07.png'
'Screenshot from 2024-07-30 00-00-17.png'
'Screenshot from 2024-07-30 00-04-01.png'
'Screenshot from 2024-07-30 00-05-59.png'
'Screenshot from 2024-07-30 00-07-33.png'
'Screenshot from 2024-07-30 00-11-23.png'
'Screenshot from 2024-07-30 00-13-21.png'
'Screenshot from 2024-07-30 00-14-33.png'
'Screenshot from 2024-07-30 01-04-19.png'
'Screenshot from 2024-07-30 01-05-24.png'
'Screenshot from 2024-07-30 01-07-47.png'
'Screenshot from 2024-07-30 01-13-54.png'
'Screenshot from 2024-07-30 11-01-57.png'
'Screenshot from 2024-07-30 11-16-56.png'
'Screenshot from 2024-07-30 16-22-39.png'
'Screenshot from 2024-07-30 16-33-52.png'
'Screenshot from 2024-07-30 16-53-50.png'
'Screenshot from 2024-07-30 18-15-47.png'
'Screenshot from 2024-07-30 18-25-54.png'
'Screenshot from 2024-07-30 18-33-26.png'
'Screenshot from 2024-07-31 11-51-40.png'
'Screenshot from 2024-08-02 19-43-00.png'
'Screenshot from 2024-08-02 19-43-28.png'
'Screenshot from 2024-08-03 10-10-10.png'
'Screenshot from 2024-08-03 10-18-33.png'
'Screenshot from 2024-08-03 17-38-11.png'
'Screenshot from 2024-08-03 17-51-34.png'
'Screenshot from 2024-08-03 23-17-27.png'
'Screenshot from 2024-08-03 23-19-30.png'
'Screenshot from 2024-08-04 11-03-37.png'
'Screenshot from 2024-08-06 10-34-35.png'
'Screenshot from 2024-08-08 13-06-03.png'
'Screenshot from 2024-08-09 10-32-10.png'
'Screenshot from 2024-08-09 11-17-59.png'
'Screenshot from 2024-08-10 12-31-07.png'
'Screenshot from 2024-08-10 12-33-22.png'
'Screenshot from 2024-08-10 13-30-21.png'
'Screenshot from 2024-08-10 16-47-58.png'
'Screenshot from 2024-08-10 17-37-02.png'
'Screenshot from 2024-08-10 18-13-07.png'
'Screenshot from 2024-08-10 21-55-02.png'
'Screenshot from 2024-08-10 21-58-09.png'
'Screenshot from 2024-08-13 22-13-41.png'
'Screenshot from 2024-08-13 22-15-16.png'
'Screenshot from 2024-08-13 22-23-25.png'
'Screenshot from 2024-08-13 22-49-02.png'
'Screenshot from 2024-08-14 23-48-45.png'
'Screenshot from 2024-08-14 23-49-13.png'
'Screenshot from 2024-08-14 23-49-27.png'
'Screenshot from 2024-08-14 23-49-52.png'
'Screenshot from 2024-08-14 23-50-07.png'
'Screenshot from 2024-08-16 19-20-32.png'
'Screenshot from 2024-08-16 19-21-28.png'
'Screenshot from 2024-08-17 14-03-20.png'
'Screenshot from 2024-08-19 13-15-42.png'
'Screenshot from 2024-08-21 21-27-39.png'
'Screenshot from 2024-08-21 22-08-46.png'
'Screenshot from 2024-08-21 22-12-39.png'
'Screenshot from 2024-08-21 22-27-24.png'
'Screenshot from 2024-08-22 15-20-40.png'
'Screenshot from 2024-08-22 15-20-57.png'
'Screenshot from 2024-08-22 15-21-09.png'
'Screenshot from 2024-08-24 13-47-25.png'
'Screenshot from 2024-08-25 14-15-43.png'
'Screenshot from 2024-08-25 14-17-07.png'
'Screenshot from 2024-08-25 14-35-09.png'
'Screenshot from 2024-08-25 15-17-42.png'
'Screenshot from 2024-08-25 15-18-34.png'
'Screenshot from 2024-08-25 17-09-44.png'
'Screenshot from 2024-08-25 17-12-44.png'
'Screenshot from 2024-08-25 18-44-32.png'
'Screenshot from 2024-08-25 18-45-08.png'
'Screenshot from 2024-08-25 20-10-57.png'
'Screenshot from 2024-08-25 20-13-19.png'
'Screenshot from 2024-08-25 22-09-42.png'
'Screenshot from 2024-08-25 22-14-36.png'
'Screenshot from 2024-08-26 20-02-33.png'
'Screenshot from 2024-08-27 13-18-19.png'
'Screenshot from 2024-08-27 13-19-25.png'
'Screenshot from 2024-08-27 14-15-08.png'
'Screenshot from 2024-08-27 14-16-08.png'
'Screenshot from 2024-08-27 14-16-37.png'
'Screenshot from 2024-08-27 16-14-05.png'
'Screenshot from 2024-08-28 00-24-56.png'
'Screenshot from 2024-08-28 22-42-30.png'
'Screenshot from 2024-08-28 22-44-12.png'
'Screenshot from 2024-08-28 22-56-40.png'
'Screenshot from 2024-08-28 22-58-11.png'
'Screenshot from 2024-08-29 20-45-53.png'
'Screenshot from 2024-08-30 11-26-50.png'
'Screenshot from 2024-08-30 11-27-25.png'
'Screenshot from 2024-08-30 11-46-41.png'
'Screenshot from 2024-08-30 12-45-35.png'
'Screenshot from 2024-08-30 14-36-04.png'
'Screenshot from 2024-08-30 14-37-52.png'
'Screenshot from 2024-08-30 15-13-02.png'
'Screenshot from 2024-08-30 16-39-21.png'
'Screenshot from 2024-08-30 16-39-52.png'
'Screenshot from 2024-08-30 16-40-22.png'
'Screenshot from 2024-08-31 15-00-27.png'
'Screenshot from 2024-08-31 15-00-57.png'
'Screenshot from 2024-08-31 15-01-41.png'
'Screenshot from 2024-08-31 15-02-54.png'
'Screenshot from 2024-08-31 15-11-59.png'
'Screenshot from 2024-08-31 15-50-09.png'
'Screenshot from 2024-08-31 17-34-21.png'
'Screenshot from 2024-08-31 17-39-46.png'
'Screenshot from 2024-08-31 18-15-02.png'
'Screenshot from 2024-08-31 18-47-20.png'

./Public:

./snap:
firefox
snapd-desktop-integration
snap-store

./snap/firefox:
4650
4757
common
current

./snap/firefox/4650:

./snap/firefox/4757:

./snap/firefox/common:

./snap/snapd-desktop-integration:
157
83
common
current

./snap/snapd-desktop-integration/157:
Desktop
Documents
Downloads
Music
Pictures
Public
Templates
Videos

./snap/snapd-desktop-integration/157/Desktop:

./snap/snapd-desktop-integration/157/Documents:

./snap/snapd-desktop-integration/157/Downloads:

./snap/snapd-desktop-integration/157/Music:

./snap/snapd-desktop-integration/157/Pictures:

./snap/snapd-desktop-integration/157/Public:

./snap/snapd-desktop-integration/157/Templates:

./snap/snapd-desktop-integration/157/Videos:

./snap/snapd-desktop-integration/83:
Desktop
Documents
Downloads
Music
Pictures
Public
Templates
Videos

./snap/snapd-desktop-integration/83/Desktop:

./snap/snapd-desktop-integration/83/Documents:

./snap/snapd-desktop-integration/83/Downloads:

./snap/snapd-desktop-integration/83/Music:

./snap/snapd-desktop-integration/83/Pictures:

./snap/snapd-desktop-integration/83/Public:

./snap/snapd-desktop-integration/83/Templates:

./snap/snapd-desktop-integration/83/Videos:

./snap/snapd-desktop-integration/common:

./snap/snap-store:
1113
common
current

./snap/snap-store/1113:

./snap/snap-store/common:

./ss:
Q2
Q2.c

./Templates:

./Videos:
Webcam

./Videos/Webcam:
2024-07-28-115920.webm
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$

*/
