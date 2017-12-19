

Hello!

Looks like you've got a whole lot of security issues on this box here and I'm 
not really sure how to best contact you, but chances are, if you're reading this
file, you've already notice I've been poking around a bit.

I'll attempt to contact you ASAP to disclose what I've found- most importantly 
the shadow files that are world readable.

Maybe the best solution would even just be segregating the users.cs.umb.edu 
server from all other services all together to avoid an issue like this again.

It's just that when you have enough people working on the same machine, somebody
is bound to run a chmod 777 and destroy your security schema.

I see you have the whole /courses/[course]/blah... setup for linking users to 
their classes and you may think:
[You] "Woah! Well if we segregate the servers, how will we allow users to 
collaborate and share class information???" 

Well it's just as easy to have that sitting on the local machine as it is to 
mount that directory virtually.
Just shoot in a handy little fstab entry to mount the other machine's share on 
the /courses directory.

If you're a part of the tin foil hat paranoia group, you could even insert a 
firewall entry that restricts the access to that particular server to only this 
users.cs...'s server IP or MAC address.


Another note: I think it'd be wise to only allow users to access /home/[user] 
and any /courses/[etc]/[etc]/[user].

But jeez I don't know. Also this document wasn't really well thought out either.
I have quite a bit to say but I just didn't want to go poking around and leave
without any explanation.
(In case you check your logs and have a massive WTF moment when you see my 
bash history poking around in /data/config/)


Anyways,

If you'd like to contact me ASAP, give me a call.

    >>781-361-4786<<

             - Sean

             (         .-,
            / )      .' (       ___
           //(.-"""-/ /\ )   .-"   "-.
           |.'     _`.\// .-'         `..--.
       ..--/-.   .'_` `'-'      ___    ( C\ \
      /   /O\    / O\   |     .'   ```--`-|_/
     /    \_/|   \__/   |    (
    |     _\-' _   __  /      `.
    \ ,--7  `.(_)_.| .'         `.
     | C._)   `.___/' .---._      \           __
     \    |       `. /      `-.    \        ,'  `.
      `--'          Y          \    |       )     `-._.--.__
                    |     \         |    _.'  .--.___.-'`--.\
                    |      |        |\  /    /              `
               _    \      |       /  `v    |
          .'`-' `--._)     /::___.'     \   /
         /    .---.       /   `-.        \ |
      _.' _.-' `._ `-.   /       `.       /
     /.--'        `-. `. \         `-.__.'
                     `.'_/



