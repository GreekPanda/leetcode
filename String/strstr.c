char * strstr (register char *buf, const register char *sub)  
{  
    register char *bp;  
    register char *sp;  
    if (!*sub)  
        return buf;  
	
    while (*buf) {  
        bp = buf;  
        sp = sub;  
        do {  
            if (!*sp)  
                return buf;  
        } while (*bp++ == *sp++);  
        buf += 1;  
    }  
    return 0;  
}  