Valve Interview Prep
====================

These are the list of questions that I have found publicly online that Valve has been known to ask during interviews.
This list was created to help me study for a Developer Relations Engineer style position in Summer of 2017.

If you know of more of them please let me know through the GitHub [Issues]( TODO) page.

An on-site interview is called an interview loop, or 'loop' for short. If you're from out of town Valve will book your flights and hotel for you, when you arrive there will be a town car driver waiting in baggage claim for you to take you to the hotel. The same driver will also bring you back to the airport, typically the night of or day after the interview. Interviews last all day, starting at 10AM. Interviews are always conducted in pairs. While you or the job posting might have a specific team in mind the loop will consist of a complete range of employees from a variety of different disciplines. If you know enough members of your future team well (as I did), you likely won't have any members on that team involved in the interview process. Valve hires for the company as a whole, and not just a specific team, and you will be tested on knowledge outside of your specific field. The interview loop consists of 2 45-50 minute sessions, and then a lunch interview where they ask more general culture fit questions. If you're in a support position then this is where the interview concludes. Otherwise you go on for 2-3 more interviews. You usually are notified if you'll receive an offer, or if you end up as a no hire before leaving.


Questions List
==============

These questions are roughly sorted in order of how important I think they are to master.
Factors that are included are:

- How often is the question asked.
- When was the question last asked.
- How non-intuitive is the question.

### Design a character for one of their current IPs.

- [**25 Apr, 2017** - Designer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW14788154.htm)

Can I pick the IP?

Great! I know exactly what I'm going to do. A Left 4 Dead Special Infected, does that sound okay?

I'm picking special infected because they have a practical use case that we can solve for. I'm not a humor/fiction writer so something like Portal wouldn't be the best idea for me. Most of those characters outside of Chell, Glados, Cave Johnson, and Wheatley serve no direct purpose other than humorous filler and lore.

So the first thing we need to decide is what would our new special infected zombie solve? I've played enough Left 4 Dead to be able to identify some routine problems. Obviously you have something like the Spitter which was introduced in Left 4 Dead 2. It solved a very clear problem of all 4 players camping right in the same corner, and was very successful, that strategy was instantly removed.

One of the problems that remained in L4D2 is players in open areas. There are a lot of times where a tank spawns and the tank isn't really able to do anything besides throw rocks from behind a wall and none of the other SI really have a chance to get in there before they are instantly picked off. I'd kind of like to solve that problem because it's particularly annoying to me in particular. Some of this could be solved by making such areas more accessible to the special infected. Does this sound like a problem worth looking into?

Onto my design.
A flying zombie. This could solve the problem by coming in from a different angle, high up in the sky and swooping down like an eagle before picking up a surivor and carrying them away. The relative silence before a final flap of the wings right before grabbing the player could provide just the right amount of panic for the other special infected to attack. Once you start carrying a survivor then your movement speed drastically decreases and you can either take them upwards, or away around a corner, or off a ledge. At this point both the SI and the survivor would start making a large amount of noise.

This special infected would likely be fun to play, and satisfying to kill. Just the movement of flying around will need to be fun by itself in the same way that pouncing as a hunter is fun.

Potential Problems:
Indoor areas.
Potential to be overpowered near high drops.
The AI controlled version. Getting this to behave in a 'smart' manner will be tricky.

How would we know if this is successful:
Play testing.

Additional Ideas:

An additional blinding hero, there is the boomer of course, but I was thinking maybe a special infected that acted a little bit like a zombine from HL2, carrying a lit CS:GO style flashbang into the middle of the survivors. Unlike the boomer, this SI would have a lot of health, and not do too much other than take focus and cause players to get out of position as they attempt to get away. It would be hilarious if it used the flashbang as the weapon, hitting the survivors with it. If they are able to blind a survivor with their flashbang then their screen will shake, go white/cloudy and have some previous render targets blended together along the way. They would be unable to hear correctly for some period, allowing the other special infected to get a better attack off.

What would it look like? Something tanky, we need a good silhouette that makes it look like it can take quite a few hits, maybe one of those cop zombies from L4D2 mutated into a real monster? It would be hilarious if it mutated while **in** some inanimate object, and that object just ends up providing protection to them. The style would depend on where L4D3 would be set.

It would also be cool to see additional tank/boss style characters, maybe the person that becomes the tank even gets to pick which one they want. Different 'tanks' could be better in different situations.

### How do you calculate the distance between two rectangles? (in code)

- [**18 Jul, 2016** - Software Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW11272018.htm) "Calculate distance between two axis-aligned rectangles"
- [**25 May, 2016** - Software Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW10728305.htm)

Questions:
Can I assume this is an AABB?
Lets define the problem a little better here, so, we want the distance from the outer edge of one box to the other one right? And, if they overlap returning 0 is expected right?
Can I do this in 2D; at least first.

See: [src/GetAABBDistance.cpp](src/GetAABBDistance.cpp)

### How do you design an elevator?

- [**18 Jul, 2016** - Software Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW11272018.htm) "Design a simple elevator on the whiteboard."
- [**25 May, 2016** - Software Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW10728305.htm)

TODO:

### What are you working on right now? And, why is what you're working on the most important problem for you to solve?

- [**25 May, 2016** - Software Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW10728305.htm)

For the past month or so I've been preparing for this loop. I created a list of all of the questions that I was likely to be asked. Watched every Valve talk and interview that I could find, got back into the programming groove after focusing on the Steam partner documentation for so long. Bought a whiteboard and started solving problems on there.

It's obviously pretty important to me! I'm need to move in the next couple months, and Valve is my best chance to improve my quality of life, and to continue doing exactly what I want to do with people that I enjoy.

Prior to this I was shipping the Steamworks documentation project which I was brought on for due to my in-depth knowledge of the Steam API. (After emailing someone from Valve one time, he added someone else to the email, with the introduction: "If you haven't been introduced, Riley is contracting for us. He maintains the _Steamworks.NET_ wrapper and probably knows as much about the public side of our SDK as anyone here.")

I loved working on that with the Steam Business team, it's been super important to give clear usage instructions for the Steam platform to our partners so they can quickly integrate Steam features into their game. The easier this is the more partners that will do so. Features like Steam Cloud, Community integration, and microtransactions all enhance the community and allowing more games to have access to this.

### Steam Support is broken, please tell us how you would fix it.

- [**16 Jun, 2016** - Customer Support Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW10952311.htm) "The CEO has just told you, "Support is broken." How do you fix it?"
- [**26 Dec, 2015** - Steam Support Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW9004970.htm)

Hopefully this question isn't asked anymore, but if it is, I'd continue to make it easier for customers to open tickets and get results in an efficient way. I'm not sure how much Machine Learning has been applied to Steam Support so far, but that's definitely the way to go with classifying tickets in the future.

Ensuring that we're constantly looking at the most common tickets and seeing how we can avoid getting those tickets at all in the first place is also very important.

Continuing to improve the response time.

### How would you implement a VLAN, in code.

- [**11 Dec, 2015** - Systems Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW8895798.htm)

TODO:

### They asked me about the games that I have worked on.

- [**25 May, 2016** - Software Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW10728305.htm) "They asked me about what projects I've worked on."
- [**21 Apr, 2016** - Designer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW10348351.htm) "They asked questions regarding a few of my projects and were interested in the background of them and what had been shipped, and was an actual product."
- [**30 Oct, 2015** - Software Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW8483720.htm)

```Their initial email said "We’d like to spend an hour or so talking about your past work so we can get a better understanding of your design process." I should have read it more closely. What I came away from after my interview. Don't focus on all the pieces of your portfolio. They've seen it, that's why you're there. Pick one or two pieces and run them through it, from start to finish. Talk about the setbacks and solutions and your contribution to the final product. Talk about the team members you worked with. -- Taken from one of those answers above.```

So, let me tell you the story about _Steamworks.NET_, why it exists, problems along the way. _Steamworks.NET_ started while I was working on this game called Spectraball. It was a real simple 3D marble madness style game, and I was a big fan of it. I ended up becoming friends with one of the developers, and I just kept prodding him to fix issues that I was finding. Eventually he got fed up with me and told me to do it. Spectraball wasn't making much money anymore, so they did a 3 way profit sharing split with me, so I was getting 33% of the profit. The first months pay wasn't much at around 1000 dollars. I started by going through and fixing the issues I was previously reporting, just small things like getting stuck in places, or the audio options not saving correctly. Basically just polish, I wasn't spending much time on it, but just pushing the updates at all was getting more people to buy it, and already my next months payment was much higher. And then I started looking at where we could go next with this. The first 'feature' type thing I added was the Steam Trading cards which were brand new at the time. People were going crazy for them. Buying any game that had them just to get the cards where they would then sell on the market for nearly a dollar per card. This was EXTREMELY successful. Spectraball tripled it's peak concurrent player count after doing this, and my payment for that month quadrupled. Then, I wanted to do more Steam integration, Achievements and Leaderboards were the thing I was most interested in doing. I looked at the available options for using Steam with Unity and found one. It was 300 dollars, 2 SDK versions behind (3 months behind), had mostly negative reviews (something like 2/5 stars), and worst of all it was closed source. I wasn't going to pay 300 dollars for something that might never be updated again. So I spent about 1 day worth of work getting something similar working. And it worked right away. It was great, it was all autogenerated, callbacks were working, everything we needed. Then I started talking about it on Twitter and had people showing interest. I then asked the owner of the company if I could take this part with me when my contract is up. 1 week after the contract was up I released the first public version of _Steamworks.NET_ to an overwhelming reception.

TODO:

### What is 2^16?

- [**14 Sep, 2015** - Economist Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW7947748.htm)

65536, the size of a short from 0 to 65535 for unsigned.

### Describe in detail how you would devise a Monte Carlo simulation to test user subscription rates to an online game service like Valve Steam?

- [**14 Sep, 2015** - Economist Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW7947748.htm)

TODO:

### What is a virtualization table; I.E., a virtual method table?

- [**14 Sep, 2015** - Economist Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW7947748.htm)

A vtable is the typical way that compilers implement virtual methods. It consists of an array of pointers to the virtual functions.

_NOTE: Bring up how I interfaced with C++ virtual tables from C# for the Steamworks.NET callbacks._

### What is a C++ virtual method?

- [**14 Sep, 2015** - Economist Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW7947748.htm)

A virtual method is one that can be overridden by a child class. It's typically implemented with a virtual table and provides late lookup.

_NOTE: Bring up how I interfaced with C++ virtual tables from C# for the Steamworks.NET callbacks._

### We are making a new controller for Steam and there will be some bugs when it first comes out, how would your respond/prepare for these extremely rare questions?

- [**21 Mar, 2015** - Translator Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW6163573.htm)

First of all, calling this an extremely rare question shows that it's obvious this person wasn't well equipped for this position.

Lets try to think about what this question might actually be.

TODO: ``

### What projects would you work on to add value here?

- [**14 Sep, 2015** - Economist Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW7947748.htm) "What project would you implement at Valve? How would your project benefit other developers?"
- [**1 Mar, 2015** - Systems and Network Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW6023298.htm)

So, I have a list of over 150 individual things that I want to do already. Many are pretty minor, like bug fixes, I can pull that up if you want.
But first I'll focus on a couple right now.

_Write down the 80/15/5 rule on the whiteboard._
So the way I like to work is, 80% of the time is spent on low risk/reasonable payoff work, 15% is spent on high risk, high reward work, 5% is spent on experimenting with stuff that I'm immediately interested in, payoff may be questionable.

80%:

- **Publisher facing improvements**
	- **Web access to Steam User Stats through appmgmt**
	  We provide a pretty rich set of stats already, but we don't provide a way to view them. We should provide better analytics to our partners to allow them to develop their games more effectively and hopefully resulting in happier customers.
	- **Price/Sale calendar**
	  A big problem I see on the Steamworks developer forums all the time is people having sale problems, either they can't set up a sale. This causes them to post to get it resolved which means that at least 3-4 Valve employees end up reading it, and one of them, likely TomG has to help them out. That's a giant waste of time for everyone involved, both us and the partner. Most of this is just caused by the interface. There needs to be something like a timeline view of what your price is both in the past and extending into the future, we shouldn't let publishers get into a bad state with their pricing in the first place, and better explain why they can't set the pricing for the specified time period.
	- **Steam Web API Tester**
	  This would function very similarly to the WG API Tester if you've ever used that, just for the partner facing Web API. The Web API is required to use Microtransactions and we need to make it easier for developers to use these features. The easier it ends up being the quicker they can improve their game in other ways. It also obviously ends up being less stressful when something just works. Happy developers leads to happy customers, and that leads to happy us.
	- Continue to identify routine problems partners continue running into, and help smooth out those issues so that
- **Improve and expose more internal services to developers.** For example the Steam Translation Server. There is nothing similar with a game focus that allows developers to freely do this. Lets create an atmosphere where developers want to be on Steam because of the value it provides them.
- **Continue to strengthen the positive relationship with developers.** Give Valve better insight into developers that are worth spending additional time on/with. This isn't so clear cut as just sales numbers, It's things like how well are they engaged with the community, do they have good insights that we could learn from? Is their popularity growing outside of Steam? Is there a benefit to trying to attract them to Steam, would our customers benefit from them being here?

15%:

- **Dedicated game server hosting**
  We already provide basically everything else except for this. Game server hosting is a pretty big cash flow for Unity's Services division and I think there's some real opportunities that we could provide to publishers and customers here.
- **Streaming subscriptions**
  Open an internal discussion about streaming subscriptions, Netflix style. Netflix and Google Play Music/Spotify/Apple Music subscriptions have been taking 10-15 out of my account each month, yet the number of times per year I spent money on movies or music at home per year prior to these services was less than half the amount I'm paying to each service. Is there room for this, does it make sense? What are the biggest challenges? Is it worth it?

5%:

- **Machine Learning**
  For things like giving suggestions to partners that can help them improve their revenue.
- **Integrating the Partner Site into SteamU**
  Lets modernize the aging appmgmt infrastructure and make improvements to it easier going forward. Lets utilize the same new codebase as SteamU, bring in modern web standards like TypeScript and React

### Explain some projects you have worked on, and elaborate on why you made certain choices for that project.

- [**1 Mar, 2015** - Systems and Network Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW6023298.htm)

TODO:

### Write a program for a toy problem. Be able to explain why you are making certain choices, and be prepared to explain how something works as you work through it.

- [**1 Mar, 2015** - Systems and Network Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW6023298.htm)

TODO:

### Solve a capacity planning and architecture problem given some parameters. Forecast the income generated by the product given some additional parameters. Analyse the viability from a business perspective, and see where you should try to make improvements in order to make the product more likely to be a business success. Secondarily, be able to explain architectural design choices.

- [**1 Mar, 2015** - Systems and Network Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW6023298.htm)

TODO:

### Please respond to this customer inquiry

- [**21 Mar, 2015** - Translator Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW6163573.htm) "Write a business letter in English in response to a complaint and then translate said message."
- [**13 Oct, 2014** - Support Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW5157156.htm)

```
Background:
You work for Venture Movie Productions Limited. You produce a wide range of movies in various genres by different directors. In theaters now:
- The Making of a Metropolis: a Documentary on Meerkats (PG)
- SlasherDeath5000 (R)
- South High: Locker Wars (PG-13)

Customer Message:
To Whom it May Concern,
Today I found out that my son Billy went to your terrible film SlasherDeath5000. My son is 12. I wouldn't have even known that he had gone if I hadn't found the movie stub in his pants pocket when doing the laundry. YOU are responsible for exposing my 12 year old to this violence. My son is an Eagle Scout. He would not have even wanted to go to this movie if you hadn't advertised it.
How dare you prey on children in this way?
You have tainted my child and are ruining the innocence of our kids. I demand an explanation and a detailed outline of what you are going to do to stop destroying America's children.
```

Hi <customer>

I'm sorry to hear about your situation, it is definitely not our intent for persons under the age of 18 to see SlasherDeath5000 without parental consent.

We strongly comply with the regulation bodies that provide age ratings on our movies. These ratings have been put in place to protect our children.

You can find the qualifications and restrictions on the 'R' film rating on the MPAA website located here:
http://filmratings.com/

We are concerned about where your child purchased the ticket. Only adults 21 and over are allowed purchase tickets to 'R' rated films. If you could get back to us with the name and location of the movie theater that provided your son with this ticket then it would be greatly appreciated and would help to further our goal of providing age appropriate content to our customers.

Thank you,
Riley Labrecque
Venture Movie Productions Limited, Customer Service team

`Gabe Newell: "At the end of the day, everyone at Valve is in support."`

Basically this person is clearly a dingus, but it's still very important to treat them with respect. Either someone broke protocol and sold this 12 year old something they shouldn't have, or this kid received the ticket in potentially questionable ways. I feel a little bad for leading the parent to even have to potentially question where the ticket came from, but it provides us a good out. And, even if they get back to us the information we requested and nothing further actually ends up happening this person will probably feel good about themselves and hate us a little bit less.

### Data management of a lot of very large files. We worked through scenarios and they asked why it would work or wouldn't work and any additional solutions.

- [**26 Sep, 2014** - There Are No Positions At Valve Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW5051432.htm)

I'm going to assume this is something like backing up very large files.

- Are they in use, such as by the perforce server. If they are we might need to stop perforce to take a snapshot. We would want to do this at an extremely routine time when few people are using the system. Such as overnight on a weekend.
- Is this local or remote?
- What kind of rotating do we want, how often are we doing this? Do we want: Live, Local Nightly Backup A, Local Previous Nightly Backup B (Produced from A), Local Weekly C (Produced from Local Nightly A), Remote Weekly D, Remote Previous Week E (Produced from D), Remote Previous Previous Week
- What OS is this on, do we need to worry about things like the Windows Shadow Volume?
- Realistically I'd probably use something like rsync, or one of the many varients. There's one called mrsync (multi rsync) which we might be able to use to parallelize this and prevent network throttling. My home backup solution is rsync based.
- The first sync will be a pain no matter what but at least it can do local hash checks without sending any data if it didn't change.
- Additionally we might want to consider chunking, multiple parts of the same file at the same time.
- We also want to think about verification on the otherside.
- With the verification we should have the current expected state of things backed up in a separate location.
- We'd want some kind of visualization to show the state of things, what kind of progress has been made, etc. Urgent email/text message/pager warnings if something goes wrong.

### How I would write the story based on the information I was given. "Think of it as a video game level or as a movie scene. Tell us what happens and describe it in detail."

- [**26 Sep, 2014** - There Are No Positions At Valve Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW5051432.htm)

TODO:

### How would you approach a colleague when you feel like their idea won't be successful?

- [**26 Sep, 2014** - There Are No Positions At Valve Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW5051432.htm)

How well do I know this colleague? Are they on my team or not?

If it's not somebody I interact directly with and I was feeling uneasy about their idea or project, I'd probably start by asking someone closer to me, someone on my team or someone that I consider a friend. They will likely be able to help me see why this persons idea is valuable. If they can't help answer that for me then I'd probably reach out to the colleague and try to have lunch with them or something like that, and have them explain their idea to me, and why they think it matters, and I'd gently raise my concerns.

If it's someone that I am more comfortable with I'd likely have a more upfront discussion, once again over lunch seems like the best time to have this conversation, but just raising my concerns more directly.

```
Then we tried to do Steam. There were a bunch of people internally who thought Steam was a really bad idea, but what they didn't think was that they would tell the people who were working on Steam what to do with their time. They were like "that's what you want to do wit your time, that's fine, but we're going to spend our time working on Half-Life 2. We think you're kind of wasting your time, but it's your time to waste."

In retrospect, it was a great idea, right? So the key thing was that people bear the consequences of their own choices, so if I spend my time on it the only persons time I'm wasting is mine. -- Gabe Newell
```

### How would you design a scoring system for Left 4 Dead?

- [**16 Jun, 2016** - Customer Support Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW10952311.htm) "Design a scoring system for the next Left for Dead game."
- [**24 Mar, 2014** - Electrical Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW3931758.htm)

So I'm going to assume this is for Versus Mode in Left 4 Dead 3?

So first lets try to identify the problems with the scoring system in the previous games. Now I have a pretty considerable amount of experience with Left 4 Dead, the primary issue that I recall was the amount of games that ended in essentially a tie. For example you had the two teams, A and B, A is extremely good, each map they get to the end without using a single health kit. B on the other hand is not nearly as good, yet good enough to get all 4 of their players into the end each time, they are burning through every health kit they can find on each map, just barely limping into the safe room each round. For both teams it feels like it was very one sided, yet the score if I'm remembering correctly was essentially a tie, maybe an extra 25 points to A. So the problem that I'm seeing is, how can we reflect that skill difference better? Is this what you guys felt was the primary problem, or what did the data from playtests and the stats suggest?

Well, some ideas:

- Make it primarily based on infected damage inflicted, rather than health or distance.
- Give points for surviving events, rather than purely distance. I recall at certain points it was more beneficial to just start running to try to get the distance.

The real challenge will be making this work across all skill levels.

If I were seriously doing this then I'd probably look back in the community to see what kind of conversations they had and good ideas they produced, and see what other somewhat similar games such as Evolve or Nosgoth are doing. While thinking about this I'm realizing just how unique Left 4 Dead was and getting nostalgic.

I'd also want to think about how this scoring system would interact with and effect matchmaking. Because Left 4 Dead1/2 didn't have any skill based matchmaking and it wasn't great for the community. Something my friends and I would do is what we called reverse-pubstomp, basically, one of us would go into each open lobby, if there were 4 players on one team and 4 open slots for us, we'd all pile into that lobby. It was the only way we could find a group of 4 to play against and it got tedious.
But yeah, we're going to have to start taking into account individual player skill and the skill of their team. I don't know too much about matchmaking systems but I know there's a lot of information on things like ELO and TrueSkill and obviously CS:GO and Dota have very in-depth matchmaking systems. Learning from them would probably be my first step in doing something like this. The challenges they faced and the way they evolved over the years paints a pretty vivid picture of unforeseen problems.

Additional Reading:

- [Left 4 Dead Wikia - Versus Scoring](http://left4dead.wikia.com/wiki/Versus#Scoring)

### Why do you want to work with us?

- [**26 Feb, 2012** - No Idea Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW1511341.htm)

There are actually a lot of reasons.

- First and foremost it just seems like the natural progression of my career. When I created Steamworks.NET it was just something that had to be done while contracting on Spectraball, nothing more than doing my job. But then being able to open source it for others and working on it throughout the years has given me a ton of insight into the inner workings of Steam and Valve in general and it has put me on the path of a 'Developer Relations Engineer' style position.
I love going to conferences and meeting new people, hearing their stories, and seeing what I can do to improve their products on a grander scale.
The Steam team specifically is the most interesting to me largely because of how close to games it is in general; I want to have a bigger impact than working on a single game. I want to help every game be the best it can be. And, if I don't end up here it would likely be somewhere like Unity. I just love creating quality tools for people.
Good tools are important, they are essential to what we do, and good tooling helps us get things done quicker and more efficiently with less frustration, which allows us to do more, earn more, and most importantly of all live happier lives with less stress.
- Culture - I already have a number of friends at Valve, and I want to work with people that I enjoy working with. When ever I end up hanging out with these people at conferences like GDC or Dev Days it feels like home. I know it's a common thing to say, but I want to be the dumbest person in the room.
- Work Freedom - As a contractor over the years I've experienced every type of project management. Some not so great examples have been:
  - 4 people needing to sign off on a tiny design change like changing the width of a side bar. I want to work with people who are smart enough to understand the ramifications of changing the sidebar themselves and don't need others to hold their hand. At best a code review by a single person if it's a more bigger or important change.
  - Contracts where I have to write daily progress reports, these are the worst, so much time is wasted on something that the other party can usually just see if they opened their eyes. Why do I need to repeatedly tell you that I submitted some fixes? It's right there in the version control, just open it and read my commit message there! There's an inherit lack of trust with having to report every step that you take.
  - Tasks being micromanaged. Exclusively being forced into doing tasks at someone else's discretion is no fun, especially if you don't feel like that is the most important thing that you can be doing right now.

  On the other hand the best contracts I've ever had have given me freedom. They've typically been along the lines of "Do X for us, and fix anything else you find along the way." and that is exactly how I work on my own projects. I work best when I can pick a task from a list that I and others have perceived to be valuable.
- Location - I love Seattle, it's my favorite city in the world. Downtown Bellevue is precisely my thing, I love the cleanliness, the skyscrapers, the modernness of it. I love going out for dinner after a long day with friends from Bungie, Unity, Sucker Punch. My girlfriend is a AAA graphics programmer and Seattle is the place that works the best for both of us.

### What do we need to do with a piracy problem in the given country?

- [**26 Feb, 2012** - Bilingual Technical Support Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW1361546.htm)

First we need to figure out why piracy is an issue in the given country.

Piracy stems from one or more of the following:

- Money - If the game or product is just too expensive to be feasible. A living wage in many parts of Africa or eastern Europe is nowhere near comparable to the US or western Europe.
- Culture - Is piracy just normalized in the country? Do you walk in to essentially a convenience store and come out with burned copies of games, movies, etc for the same price as a soda? Are there major culture hubs that promote online piracy? Such as the largest region specific video game forum.
- Availability and ease of access - Can you even purchase the products in the country? If you can, are you getting the same product everyone else is getting? No one wants to play a region specific copy of a game, they may not work with mods or may have content cut from them. Is purchasing it easier than pirating? While this is usually true of most media now, if we go back 10 years ago it definitely wasn't. You likely had to get in your vehicle, drive at least 5-15 minutes, get to a store that sells the product, be it a Gamestop, Best Buy, Wal-Mart, or what ever. Then you spend at least 10 minutes traversing the maze of a store, sometimes you had to get an employee to open the glass case to get the product, and then wait in line to checkout before finally... driving back home. Hell, what if you're disabled and are not easily mobile? Sometimes ease of access isn't just 'nice', sometimes it's required.

I know this in part because I was a pirate when I was a teenager, and now I own over 1,500 products on Steam. My piracy stemmed primarily from lack of money and culture. Only after getting my first job that left me with a disposable income was I able to afford games other than the select few that I **really** wanted. Torrents and the wave of trivial piracy that came with it was also a huge influence. To me while growing up piracy was just something that everyone (that I knew at least) just... did.

### What are the best dates to run marketing campaigns in your country?

- [**26 Feb, 2012** - Bilingual Technical Support Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW1361546.htm)

In Steams case, as it is a global store I believe you have to take all of the other countries into consideration as well. Regardless the best date for a specific country is likely a combination of when they have the most disposable income and are most active on the Steam store. In the US and Canada this is of course around the winter holidays, when students are on a break and it's generally accepted that much more money will be spent on superfluous purchases and gifts. This also coincides nicely with the Australian summer break (which it should be noted that Valve does not conduct business in Australia.). And of course you have the northern hemisphere Summer sale which hits soon after college students are done exams, and high school students are getting out of school for the summer, which leaves them with an abundance of free time. If we want to look at something like China, then the Golden Week surrounding the Chinese Lunar New Year likely sees a huge influx of free time and thus daily active users. This is just a suspicion though, using the actual data for this stuff would lead to a clearer answer. If Steam were a public company we might want to take into fiscal quarters into sales.

### What is a device driver?

- [**26 Feb, 2012** - Bilingual Technical Support Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW1361546.htm)

A device driver is the software that allows a piece of hardware to communicate within the operating system. For example you might have an audio or video driver which exposes the sound or video card to the operating system and implements the necessary routines for generalized operation. In the case of video or graphics drivers this would mean implementing a layer that handles the translation of API calls from OpenGL and Direct3D to a format that works effectively with the graphics card.

### How would you write a specific query in SQL?

- [**26 Feb, 2012** - Bilingual Technical Support Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW1361546.htm)

TODO: I should probably relearn SQL

### What are the three top issues with Steam?

- [**21 Mar, 2015** - Translator Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW6163573.htm) - "What is your opinion on Steam and how can it be improved?"
- [**1 Dec, 2011** - Developer Relations Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW1222445.htm)

If this were a year ago I would have said Steam Support is the number one issue, it absolutely dwarfed the other issues. Fortunately this is MUCH better now. It might still be on the list, but it's not #1.

- The aging client and ecosystem surrounding that has been quite problematic, for example people complaining about the lack of 'retina' support on OSX is very real. Or how tightly integrated the Steam Controller Manager is to Big Picture (Which... off topic tangent, Steam Controller Manager really needs a better name now that it supports more controllers than just the Steam Controller. Steam Input Manager or something like that would probably be ideal.) Actually, the separation of big picture at all, it feels like Steam is where Windows 8 was with it's completely separate interfaces. Now of course, I'm well aware that this problem is fortunately getting close to being solved with Steam Universal.

- The number of half baked features is a little bit of a problem. Lets take Steam Broadcasting for example. What was that supposed to solve, was it supposed to compete with Twitch? We need to integrate features better, hopefully SteamU will help with this. For example, your friends list should be a source of information, you should be able to see if your friend is broadcasting, and be able to view their broadcast easier. If they are using Steam Music, why not show what song they are listening to on the friends list? If we want these features to succeed then we need to make them first class. Twitch works because you go to twitch and you are already watching *something*. The only way that I know to start watching a non friend broadcast is via a games community hub which is already some 5 levels too deep. Chat is falling by the wayside. Everyone I know uses Discord as their primary PC game related chat platform now, why? Because it evolved. Steam Chat hasn't changed at all since mobile app was first introduced and chat sort of -- almost got offline messages and sometimes you get a few lines of chat history. It needs to be a first class citizen again, and not just a little better, it needs to be better than Discord. Remember Xfire? It was Steam chat before Steam. Lets not be Xfire. This isn't even taking into account the marketing ramifications of having a successful communication platform.

- The loss of the larger publishers as partners is very worrying. The same day I got the email about coming in for this loop was the day Bungie and Blizzard announced that Destiny 2 was coming exclusively to Battle.net or the Blizzard Application -- or what ever they think they are calling it today. Obviously there's a lot of factors at play; but is it time to better start incentivizing the AAA publishers to be on Steam? I don't know the answer to that without the data. But if Activision finds success by bringing Destiny to Battle.net and their next 10M+ sales blockbuster ends up on Battle.net instead of Steam that seems like a pretty huge problem for both Valve and customers. Then Steam is really only left with Take2, Zenimax, and Sega (and I guess Ubisoft kind of sort of came crawling back)? How long until they start their own platforms? We need Red Dead Redemption 2, we need GTA6, we need the next Elder Scrolls or Fallout game.

Even if Valve made almost nothing from Destiny 2, a game like that gets people on Steam. I'm extremely curious to know about the number of people that signed up and bought their one big AAA blockbuster, and then went on to spend more than the price they paid for that game in the first place once they were in the door. Now obviously there's some like survivorship bias or something here, and just because that was the game they signed up to play for doesn't mean they would never have. But these numbers are all in the data, and I'm extremely confident that the rest of the Steam Business team has been making the right calls. These things obviously aren't so clear cut but...

I personally don't care about exclusivity as much as I care about the option available to customers, Steam can succeed even if nothing was exclusive to it, it just needs to keep momentum. I've always said that players create players, it's like flocking. If all of your friends are on Steam, well that's obviously the place to be. As a Steam customer I don't care if Gears of War 4 or Forza Horizon 3 is on the Windows Store or not, but I do care if it's not on Steam. Life is easier when my games are all in the same library.

There are a large number of minor problems that need to be solved but, this should be a good start.

I'm curious what do you specifically perceive to be the top issues?

### How would you build a mobile app for Steam and would you charge for it?

- [**13 Jan, 2015** - Designer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW5688164.htm) - "Design a Mobile app"
- [**1 Dec, 2011** - Developer Relations Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW1222445.htm)

I would likely be using React. TODO: Lots more, this is like a 40 minute design question. The designer interview has a lot of good notes

No, I would not charge for it. Steam is the service, not the product. No one else is charging solely for the opportunity to buy stuff and access their account from a different device.

### Implement a function in C to draw a circle using the single point drawing function drawPt(x,y).

- [**6 Nov, 2010** - Steam Release Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW706375.htm)

So a couple questions to start this off, can I assume this will just be on a 2D plane, and the plane can then be transformed afterwards? And, I'm going to assume there's no hidden tricks in the drawPt function like that it uses Cartesian points and not something like polar coordinates... heh

So, I think I kind of already know this question from when I implemented primitive drawing in my own engine a while back, but lets see if I can remember it.

First lets get our naive implementation down. I'll feel more comfortable getting like 5 lines of code up on the board and optimizing that rather than trying to jump to the end and probably forgetting things along the way.

See: [src/DrawCircle.cpp](src/DrawCircle.cpp)

### Tell us about some of the prevalent DRM technologies out there.

- [**6 Nov, 2010** - Steam Release Engineer Interview](https://www.glassdoor.ca/Interview/Valve-Corporation-Interview-RVW706375.htm)

Steam DRM aka SteamStub is the first thing that comes to mind, because it's free and extremely easy to use, by just setting a flag in your depot build script. Denuvo Anti-Tamper is the big new kid on the block, but it's basically reserved for AAA games, due to its price point.

Steam CEG (Custom Executable Generation) was a thing around half a decade ago but it's now deprecated.

We can also go back to things like StarForce and SecuROM, but that's getting into pretty irrelevant territory.

Additional Reading:

- [Steam DRM in-depth](https://pcgamingwiki.com/wiki/User:Cyanic/Steam_DRM), [Steamless](https://github.com/atom0s/Steamless)
- [Denuvo on Wikipedia](https://en.wikipedia.org/wiki/Denuvo)
- [Steamworks Publishing Services (Steam DRM, CEG)](http://www.steampowered.com/steamworks/publishingservices.php)
- [The Big List of 3rd Party DRM on Steam](https://pcgamingwiki.com/wiki/The_Big_List_of_3rd_Party_DRM_on_Steam).


Bonus Reading Material
======================

This is just to get into the mindset of working at Valve, how and why it operates the way it does.

- [Valve Blog](http://blogs.valvesoftware.com/) - Especially the Economics blog by Yanis Varoufakis really helps you view the big picture.
- [Steam Blog](http://steamcommunity.com/app/593110/allnews/) - Some great posts include: [The Steam Store: Our Philosophy and Next Steps](http://steamcommunity.com/games/593110/announcements/detail/1301948399257707760).
- [Handbook for New Employees](http://www.valvesoftware.com/company/Valve_Handbook_LowRes.pdf) - Read through this multiple times.
- [The Psychology of Games](https://www.youtube.com/watch?v=K0GZMA6c0T4) - Some useful information that can help out.
- [Introducing New Ways to Support Workshop Creators](http://steamcommunity.com/workshop/aboutpaidcontent/) and [Removing Payment Feature From Skyrim Workshop](https://steamcommunity.com/games/SteamWorkshop/announcements/detail/208632365253244218) - Try to understand these stances from each side of the issue. Analyze why Valve made the decisions they initially did. Valve likes to ask questions where you have to consider multiple parties. In this case you have to think about Valve, the publisher (Bethesda), the customers, and additionally the modders/content creators.
