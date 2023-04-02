/==========================/
/     (C) HARRY CLARK      /
/==========================/

.SECTION VIDEO_MAIN

.GLOBAL INIT_VIDEO, CHECK_CABLE
.GLOBAL GET_PORT_ADDR

/==========================/
/      VIDEO REGISTER      /
/==========================/

INIT_VIDEO:

// USING A LOOKUP TABLE, PARSE THE BYTES
// RELATIVE TO EACH PIXEL

MOV #3, R1
AND R5, R1