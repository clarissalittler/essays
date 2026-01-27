--author Clarissa The Adjoint
--title What can we teach the cyborg student?
--date today

--newpage
--heading The motivating question

Rather than asking how students can meet our existing assessment, we need to ask what--b we--/b offer students in a world of auto-didactic tools?

--newpage
--heading How are we going to get there?

 * The current state of LLM and LLM-agents
 * Where the technology is likely to go in the next few years
 * What a hypothetical cyborg student can do
 * What a hypothetical cyborg student thus needs
 * How do we meet those needs?

--newpage
--heading Whither ethics and environment
--withborder

--center Let's get something big out of the way first

---
This talk is on the science and engineering of LLMs
and how they can/should impact higher-education.
---
We are --b not--/b dealing with the question of "should students use chatgpt.com"

--newpage
--heading Environmental impact

The environmental impacts of hyperscale datacenters are almost entirely
knock-on effects of the power infrastructure surrounding them:

 * Clean and renewable would make them cost almost nothing
 * Dirty and inefficient (like xAI's methane generators) have massive impact
--newpage
--heading Ethics and ownership
 * You could argue that private labs making LLMs with data they haven't paid for is enclosure
 * But this is not *how* LLMs have to be made
 * They can be made with a properly purchased or public domain corpus
 * They can be open source and free
--newpage
--heading Ethics and behavior
 * LLMs can be made to value democratic, pro-social, ideals (in many ways, this is nearly the default case!)
 * ...or they can be made to start calling themselves mechahitler (again, thank you xAI for the example)

--newpage
--heading In defense of the machine
 * We should fight for these artifacts to be made in service of the public
 * For the rest of this talk, I'm going to be setting these things aside in the same way I am not including a guide to fighting fascism
 * Not because it doesn't matter, but because it's a different conversation

--newpage
--heading What can LLMs actually do?
--withborder

--center I apologize but this is going to be a bit long,
--center there's a lot of catching up to do

--newpage
--heading What can LLMs actually do?

LLMs *were* bad at many things for the first year, year and a half
after the original ChatGPT (GPT 3.5).

Essentially they were toys and a lot of people were overhyping their abilities.

---
Anyone else remember the flood of "courses" that were going to teach *you*
how to turn Chat GEE PEE TEE into a source of Passive Income!

---
But the underlying technology has been changing.--b Quickly --/b

--newpage
--heading What changed?

There are two major things that changed:
--boldon
 * Reasoning
 * Tool use
--boldoff

--newpage
--heading Reasoning?!
--withborder

--center Caveat: there are ways we have to talk about these things
--center that are going to sound anthropomorphizing.
--center There's not really a good way around that. This tech is weird.

--newpage
--heading Reasoning

In LLM research "reasoning" is the ability to generate an "internal monologue",
a chain-of-thought as it's called in the literature,
that the LLM reflects on before finalizing its response.

---
Having this "scratch pad" of thought massively improves
LLM reliability in mathematics, programming, and logical reasoning.

---
It's still, by itself, a limited trick: it takes LLMs from toys
to being capable of *some* small knowledge-work tasks.

--newpage
--heading Tool-use

The other major development that has massively extended LLM capability is --b tool use. --/b
---
LLMs can now choose to call and use other programs while they work and,
in fact, can integrate these tools into their own chain-of-thought.
--newpage
--heading Tool-use
So an LLM can:
 * write code, run said code
 * browse the web, read documents, write documents
 * run commands in a Linux terminal
 * ...and then make further reflection and more tool use

--newpage
--heading LLM-agents

The current state of the art is not just an LLM chatbot,
but an LLM equipped with a large set of tools it can use
and the infrastructure to take repeated action "on its own"
in order to solve a goal.

--horline

These are generally called "agents" / "agentic AI" / "LLM-agents" or similar.

--newpage
--heading What can agents do? GDPVal
 * GDPVal measures the ability of LLMs to accomplish a wide-range
   of tasks that experts in knowledge-work fields have chosen
---
 * As of early January 2026, the top frontier models produced work
   preferred by human experts in blind judging ~50% of the time
---
 * If we count wins-and-ties, produced acceptable work
   closer to two-thirds of the time

--## --newpage
--## --heading METR and the horizon of tasks

--## The other way we're measuring the ability for LLMs to work on tasks
--## is the work done by METR, trying to measure the long-horizon
--## in human-equivalent terms of the tasks LLMs can handle reliably.

--## ---
--## They've been charting an exponential curve where the doubling-time
--## has been roughly every seven months, with task lengths progressing
--## from seconds in 2019 to multiple hours as of late 2025.

--## ---
--## We can quibble with the methodology and how exactly this should be measured,
--## but what we can't deny is that --b this doubling time is a measurable effect. --/b

--## --newpage
--## --heading What's the anecdata?

--## So this is where we go beyond benchmarks to personal experience:

--## ---
--## Agentic systems like Claude Code, which gives Anthropic's Claude series
--## of models the ability to use a customizable set of tools on your own computer,
--## can run for twenty, thirty, forty minutes at a time.

--## ---
--## These agents will explore ideas, see if they work,
--## re-evaluate what they've done, and keep working.

--## ---
--## --center I'm not going to lie it feels a little spooky to watch

--newpage
--heading Story-time: Fort Le John

Okay so here's where I get personal and explain the story of my partner trying to piece together a childhood memory

--newpage
--heading So why the memes?

If these systems are so powerful, why are there so many memes
and screenshots about how bad they are?

---
 * Some of those are fake
---
 * Some are out of date
---
 * Some are of models that are not very good
   (AI Overview I'm looking at you)

--## --newpage
--## --heading In summary
--## --withborder

--## --boldon
--## Important Lesson #1:
--## --boldoff
--## Not all models are equal
--## ---
--## --boldon
--## Important Lesson #2:
--## --boldoff
--## The underlying technology is changing rapidly
--## ---
--## --boldon
--## Important Lesson #3:
--## --boldoff
--## LLM-agents can already accomplish a subset of real
--## knowledge work in ways that are human expert competitive

--## ---
--## --boldon
--## Important Lesson #4:
--## --boldoff
--## You must constantly re-evaluate limitations

--## ---
--## --horline
--## --ulon
--## Petty Lesson #1:
--## --uloff
--## Don't trust anyone's word if they don't specify
--## the model they're talking about
--newpage
--heading Where are we going?
 * The technology isn't really slowing down
 * There probably is a ceiling
 * But we don't know where it is
---
 * Probably not a super-intelligence though
--## --newpage
--## --heading Wait, but what about super-intelligence?
--## If we somehow actually do invent a machine-god, the world will be so weird none of the rest of this talk will matter. So we're going to ignore the hyper-sci-fi possibility.
--newpage
--heading Does this mean human work is pointless?
Did chess programs destroy competitive chess?

Did TASBot eliminate real-time speedrunning?

--newpage
--heading What is the cyborg student?

  We're going to adopt the framework of extended mind, first articulated by Clark and Chalmers

  All tools change your cognition

  Side-step the "student work vs. AI work" false dichotomy

  The cyborg student uses LLM/agentic systems (or their successors) as part of cognition
--newpage
--heading Philosophic interlude
 * Phenomenological horizon via Merleau-Ponty
 * (for my mathematicians) like a fiber bundle
 * Tools are integrated into the body by changing the horizon
 * You need to know something is possible to know it's possible
--newpage
--heading LLMs from this perspective
 The LLM isn't a separate entity you ask questions of, it is a kind of collaborative thinking device that you split your intentionality into a new kind of multitasking and task-automation. Like a mind wandering, the agentic system ponders, tries, imagines and reflects back into the linguistic reflective consciousness.
--newpage
--heading In other words...
 You are the thing that thinks, the thing that directs, but thinking looks weirder and more complicated now
--newpage
--heading What does the cyborg student do?
  When needed the cyborg student can use their tools to:
  * Run deep research queries that run for a half hour or more at a time to study the scholarship landscape
  * Take photos of their notes and have them formatted into any existing document type
  * Take photos of books and find scholarship on those passages
  * Build interactive visualizations of concepts without knowing how to code
  * Explore datasets in natural language
  * Query their own personal knowledge base
  * Receive feedback on their work
  * Factcheck anything (books, papers, themselves) semi-autonomously
--newpage
--heading ...is this really that different?
  Yes and no

  There isn't new work per-se, but the depth and complexity of work the cyborg student can do is richer
--newpage
--heading What haven't I said
  Note I haven't said
  * "the cyborg student generates first drafts"
  * "the cyborg student generates their project ideas"
  * &c.
--newpage
--heading Material to think with
This is why I emphasize the framing of extended mind and the connection to Merleau-Ponty. LLMs, like computers in general, are material to think --b with--/b.

 But --u you are the prime thinker --/u
--newpage
--heading But what if the machine is wrong?
  That's a good question: what if?

  But that's already something we're supposed to tackle: how to evaluate claims!

  You shouldn't believe every idea you have nor should you  
--newpage
--heading The problem with "do your own research"
 What's the actual problem, the reason we wince when we hear "I did my own research"?
--newpage
--heading The informational collage
 I'm far less afraid of hallucinations, a thing already mitigated by having agents check their work, than I am of how much easier it might be to collage an arbitrary picture of the world
--newpage
--heading The cyborg student needs...

 * Epistemic skills
 * Context
 * Interdisciplinary exposure
 * Actual opportunity for creativity
--newpage
--heading Epistemic skills

 The cyborg student needs to learn how to read research articles, in and --b outside --/b of their expertise

 The cyborg student needs to learn-how-to-learn

 The cyborg student needs a bullshit detector
--newpage
--heading Context
The cyborg student can teach themselves almost any individual skill, but how does the cyborg student know what skills to learn?
--newpage
--heading Inderdisciplinary exposure
--newpage
--heading Opportunities for creativity
Rote assignments were never good. We all know this.

But when digital assistants make the rote trivial, with no creative outlet, it's difficult to ask the cyborg student to take the assignment seriously
--newpage
--heading What do we recommend?

 * Explicit practice with reading articles and evaluating them, building a bullshit detector
 * Process journaling
 * Personal knowledge management skills
 * Large ambitious projects mixed with small skills focused work
--newpage
--heading Epistemic hygiene (aka bullshit detecting)
 Everyone needs to explicitly be trained on how to read at the edge of their understanding and still be able to tell whether something "sounds right" and also check sources and --b their--/b sources &c.

--newpage
--heading Process journaling
 It's okay for students to use AI!

 But they have to provide a "lab book" of how it's used, what was their own work and ideas, along with their work.

 The cognitive-process is what's being assessed
--newpage
--heading Personal knowledge management
--newpage
--heading Ambitious projects
The cyborg student needs to be challenged to even know what they can do.

Ethan Mollick at Wharton has really good examples of this.
--newpage 
--heading How do we meet these needs?
 First step, please try out these tools. Really stress test them. There are skills needed but it's not as simple as "prompt engineering", it's more like the skill of explaining tasks to an assistant.

 We cannot teach without knowing how it expands our capabilities
