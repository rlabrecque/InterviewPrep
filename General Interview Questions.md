Common Questions
================

This is a selection of frequent general questions that come up in interviews. They typically revolve around past history and exist to provide insight into your creative process.

Challenges
----------

**Steamworks.NET**
I have a few for this one.

1. Scaling up was challenging. When _Steamworks.NET_ started it was intended for internal use only. The initial prototype was generated using 70 or so lines of python, and we only used an extremely limited subset of the Steam API. Prior to publicly releasing it I did some due diligence to make sure most things worked correctly. But even still it was nothing compared to the masses stressing the entire API in different ways. This lead to the creation of the Test project. This project implements every single Steam API call and provides an interface where you can test out the various API calls and how they interact with eachother. It allows me to quickly test reported issues without having to write any code, and is now the place others go to learn how to use _Steamworks.NET_
1. Building out multiplatform support. _Steamworks.NET_ targets 10 total platforms. Getting them to all play nicely together has been a thorn in my side ever since. (_Show the Steamworks.NET_ support matrix.)

**Modbox by Alientrap Games**
Programming and optimizing a VR only game with no VR headset. This was something I did for about 2 months before finally being able to get a Vive Pre. What a pain. So what we did was, had essentially keyboard flight controls with like WASD to move, then arrow keys to rotate/pitch the camera, and Q and E to move up and down. It wasn't fun, but we knew I'd be getting some sort of headset at some point so it wasn't worth the time to work on really what would never be a good experience.


Mistakes/Failures
-----------------

**Chips Challenge by Niffler Ltd**
This is the one that got away, the one problem that haunts me the most. They were having trouble getting the Steam API integrated. This game was first released before I was born, and just trying to get it to compile was a nightmare. The game would crash deep in the Steam client after calling specific functions. After spending way too much time on it I had to throw my hands up. Months later they figured out that it was a compiler flag, likely carried over from some some ancient version of Visual Studio that was setting struct pack sizes in an odd and non standard way and interfering with some of Steam's structs. The Steam headers are supposed to wrap all of their structs in packsize tags, but there is a few cases where they missed it resulting in this archaic bug hunt.

**Steamworks.NET**
The name Steamworks.NET, I don't own the domain, I didn't consider the name when it was just an internal library. This has resulted in a ton of confusion. Soon after releasing it websites like Twitter and Steam started automatically hotlinking URLs without HTTP in front.


Enjoyed
-------

**Steamworks.NET**
Being able to work with so many talented individuals and teams with Steamworks.NET has been some of the most fun that I've had in my life. I love going to conferences and meeting everyone that uses Steamworks.NET, hearing their success stories and trying to make their lives easier.

**Dyscourse by Owlchemy Labs, LLC**
This is one of the few times that I've been there to ship a game. Most of my contracting work goes into mid project work, people aren't typically leaving services integration right to the very end. They had an issue crop up mere HOURS before their launch. We started a Skype call where they could explain the problem - when you unlock a specific achievement the game would crash in the Unity graphics library via the Steam Overlay dll. Given that these were two closed source products, Steam and Unity, there wasn't much we could do. Eventually we found out delaying the achievement by just a couple frames completely fixed the problem. The achievement was being unlocked right as a Unity Scene switched. While switching scene Unity was doing some resetting of it's internal memory, causing the data the Steam Overlay was accessing to become invalid and the resulting crash.


Leadership
----------

**Steamworks Documentation as Technical Writer (Remote Contract), Valve Corporation**
While working on the documentation for Steamworks I learned of another remote contractor tasked with a similar job, by a different team. I was able to loop this individual in to straddle my team, allowing him to work in the new documentation system that was being built. I also provided guidance and direction to this individual, keeping him well informed the current state of things, ensuring that no one stepped on eachothers toes, deadlines we were expected to hit.

**Kreedz Climbing by Obsession Soft**
I worked on methods to improve communication throughout the remote team working on _Kreedz Climbing_. Implementing standard communication channels, and improved visibility of the projects progress throughout the team. The primary tools used to accomplish this were: 1. A chatroom like system built into the Kreedz website, it functioned similar to Slack. 2. Centralized version control. Everyone was on the same page all the time. You never had to explicitly ask what someone was working on, you would just see it in the repo. Or just go back and read the chat where people would exclaim that they are working on a new map, and here's what it looks like!


Conflicts
---------

**Kreedz Climbing (Web Developer & Game Designer, Obsession Soft)**
The lead programmer was extremely protective of his code, he didn't want anyone else to see it or work on it. I kept trying to contribute but kept getting shot down, resulting in discarded work. His loss, I moved on to create _Multiplayer Bunny Hops: Source_ as it solved similar problems that we faced in _Kreedz Climbing_. I was able to apply the lessons learned there in a rather different context that had a clear market opertunity. This individual later appologized up front the next time I seen him years later, and I now consider him a friend.


TODO: I'm having a pretty hard time with this. I'm actually a pretty mellow person, things never really phase me, and I try to avoid conflict when I can, it rarely accomplishes much.


What You'd Do Differently
-------------------------

**Ask for what I want**
For a long time I thought that if I just did stuff, eventually what I really wanted would come to me. That was foolish. I've only ever really gotten what I wanted when I expliticly asked for it rather than playing coy.

**Focus on other areas of computer science and programming**
While studying for these interviews I realized how much I neglected certain areas of computer science, and how deep some of my knowledge gaps were. This lead to a minor emotional crisis until I finally realized that a knowledge gap is just that, a gap. There's stuff on the other side, ones knowledge doesn't just stop at the gap, and that gap can be filled. A large portion of my life going forward is going to be dedicated to learning new stuff instead of just coasting on what I already know, and not let this knowledge slip when I don't use it day to day. I want to continue doing puzzles on sites like http://leetcode.com, and working through the moderately advanced math topics on Kahn Academy.

**Work in depth with more teams**
I've enjoyed the freedom of jumping between teams, helping them out for a quick week or two before moving on, but I haven't really had the satisfaction of seeing something through to the end with the same group.

TODO: These don't list any projects. It sounds like I didn't learn anything from the projects.