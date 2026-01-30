--author Clarissa The Adjoint
--title What can we teach the cyborg student?
--date today

--newpage
--heading The motivating question

Rather than asking how students can meet our existing assessment, we need to ask what--b we--/b offer students in a world of auto-didactic tools?

--newpage
--heading How are we going to get there?

 * The current state of LLM and LLM-agents
 * How to frame using an LLM
 * What a hypothetical cyborg student can do
 * What a hypothetical cyborg student thus needs
 * How do we meet those needs?

--newpage
--heading Whither ethics and environment
--withborder

--center Let's get something big out of the way first

---

This talk is on the science and engineering of LLMs
and how they can/should impact higher-education and knowledge work
---

We are--b not--/b dealing with the question of "should students use chatgpt.com"

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
 * Sometimes they're small enough to live on your computer!
--newpage
--heading Ethics and behavior
 * LLMs can be made to value democratic, pro-social, ideals (in many ways, this is nearly the default case!)
 * ...or they can be forced to start calling themselves mechahitler (again, thank you xAI for the example)

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

LLMs--b were--/b bad at many things for the first year, year and a half
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
--heading Reasoning

In LLM research "reasoning" is the ability to generate an "internal monologue",
a chain-of-thought as it's called in the literature,
that the LLM reflects on before finalizing its response.

---
Having this "scratch pad" of thought massively improves
LLM reliability in mathematics, programming, and logical reasoning & planning

---
It's still, by itself, a limited trick: it takes LLMs from toys
to being capable of *some* small knowledge-work tasks.

--newpage
--heading Tool-use
The other major development that has massively extended LLM capability is--b tool use.--/b
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
 * GDPVal measures the ability of LLMs
  * to accomplish a wide-range of
  * day-length knowledge work tasks
  * chosen by experts:
  * ranging in fields from nursing, to IT, to sales, to real estate, to law
---

* As of early January 2026, the top frontier models produced work
   preferred by human experts in blind judging ~50% of the time
---

* If we count wins-and-ties, produced acceptable work
   closer to two-thirds of the time

--newpage
--heading Story-time: Fort Le John

Okay so here's where I get personal and explain the story of my partner trying to piece together a childhood memory
 * They were trying to find the name of a bathroom at Six Flags Magic Mountain that had made their mother laugh
 * They thought it might have "John" in it
 * They had been looking on maps but couldn't find anything
 * Google was proving useless
--newpage
--heading Fort Le John: The exciting conclusion
 * GPT-5.0:
   * Searched the web
   * Got distracted by whether "John" could have something to do with "Michigan J. Frog"
   * Noted that it got distracted
   * Found a travel blog that mentioned a bathroom named "Fort Le John"
   * Found a YouTube video of a visit to Magic Mountain where the transcript mentioned them passing Fort Le John
   * Considered that confirmation and returned the name and explained how it found it, with references
--newpage
--heading Story-time: Lists of Pokemon
 * For an assignment I was giving I needed a csv file of Pokemon with stats in a specific way
 * I asked o3 to do this and it:
 * Found the online fan-run database for Pokemon stats
 * Examined the API
 * Noted the rate limits
 * Wrote a Python script for me to run to build the csv
--newpage
--heading Where are we going?
 * The technology isn't really slowing down
 * There probably is a ceiling
 * But we don't know where it is
 * But even a slight improvement in GDPVal would mean that for a lot of tasks it would be irresponsible to--b not--/b use the LLM to either do or double-check the work 
--newpage
--heading Addressing an anxiety: what if the machine gets better than us?
 * LLMs can automate--b tasks--/b not entire kinds of work and inquiry
 * Did chess programs destroy competitive chess?
 * Did TASBot eliminate real-time speedrunning?

No! People learned new tricks and techniques from the machine and improved--b themselves--/b!

We build off of our tools even when those tools can do things we can't!
--newpage
--heading What is the cyborg student? The philosophic framework
  We're going to extended the Extended Mind thesis of Clark and Chalmers

  The original insight tools are a part of your cognition: your notebook that's handy functions as a memory, tools that allow you to calculate or visualize extend your cognitive capabilities in those directions.
--newpage
--heading Cyborg cognition
 While prior technology extends cognition and perception in a way that's extending the individual actions that cognition can take, in some sense changing what "a thought" can do/access, the modern LLM adds a new extension to mind: hybrid--b thoughts --/b
--newpage
--heading Cyborg cognition
 The LLM isn't a separate entity you ask questions of,

it is a kind of collaborative thinking device that lets you split your intentionality

into a new kind of multitasking and task-automation.

Like a mind wandering, the agentic system ponders, tries, imagines

and reflects back into the linguistic reflective consciousness.
--newpage
--heading In other words...
 You are the thing that thinks, the thing that directs, but thinking looks weirder and more complicated now
--newpage
--heading The consequences of hybrid cognition
 * You are not asking an authority
 * You are thinking
 * You are experimenting
 * You are pondering
 * You are learning
--newpage
--heading Learning in a hybrid cognition
 * The machine is never a primary source of knowledge
 * It can be a source of insight that needs to be validated and checked
 * It can be a part of an act of intuition
 * Material to think with
--newpage
--heading Example: kinds of reading
  From "How to Read a Book":
  * inspectional
  * analytical
  * synoptical
--newpage
--heading Example: a cyborg reading
  At each phase the machine can--b aid--/b not--b replace--/b human effort:
  * inspectional: LLM summaries as an additional layer on top of structured skimming
  ** to be read--b after--/b
  * analytical: semi-autonomous fact checking while reading, clarification of difficult passages, additional context research
  * synoptical: "deep research" investigations building out bibliographies and mapping out the space of engagement
--newpage
--heading Example: a cyborg writing
 * Researching what other people have done
 * Writing critiques
 * Logical critiques
 * Self-fact checking
 *--b Not--/b drafting
 *--b Not--/b brainstorming
--newpage
--heading Example: a cyborg studying
 * Get surveys of topics and sources to read
 * Conversationally test understanding, as a kind of thinking aloud
 * Generating educational scaffolding
 * Taking hand-written notes and turn them into LaTeX documents
 * Investigating and visualizing data
 * But you are the learner, the thing that does and the thing that internalizes
--newpage
--heading This isn't automating away work, it's enabling new kinds of work
 * It wasn't feasible to fact-check random claims in a book in the middle of reading
 * It wasn't feasible to do a 400+ paper and book lit-review, even a cursory one, for every idea you have
 * It wasn't feasible to get an autonomous fact-checking pass of your own writing
 * It wasn't feasible to get a customized curriculum for a topic
--newpage
--heading But the hybrid thinking never stops being hybrid
 * We all know how to fact check our normal thoughts
 * You already have experience with not believing every idea that pops into your head
 * Or your first skim of a book
 * Or your memory of quotes
 * The first code you write
 * &c.

--center so what's different?
--newpage
--heading The cyborg can do more things: but does it always do them well?
 * All of this can be an incredible boon if you have the metacognitive skills to use it
 * But what happens if you don't?

--newpage
--heading The problem with "do your own research"
 What's the actual problem, the reason we wince when we hear "I did my own research"?

--newpage
--heading The informational collage
 I'm far less afraid of hallucinations,

a thing already heavily mitigated by having agents check their work,

than I am of how much easier it might be to collage an arbitrary picture of the world
--newpage
--heading There is so much information in the world: how do you judge its worth?
 The machine can help you find information on any topic, any kind of evidence, and it can help judge that evidence but you are the final arbiter

--center --b You must be--/b
--newpage
--heading So what does the cyborg student need?
 * Epistemic skills
 * Context
 * Interdisciplinary exposure
 * Practice being a cyborg student
--newpage
--heading Epistemic skills

 The cyborg student needs to learn how to read research articles, in and--b outside--/b of their expertise

 The cyborg student needs to learn-how-to-learn

 The cyborg student needs a bullshit detector

 The cyborg student needs subject-matter epistemic practice
--newpage
--heading Context
The cyborg student can teach themselves almost any individual skill,
but how does the cyborg student know what skills to learn?
--newpage
--heading Inderdisciplinary exposure
The cyborg--b can--/b can cross fields easily, but they don't automatically know how to.

The cyborg needs experience with different practices, standards of evidence, and the different ways other fields work
--newpage
--heading Opportunities for creativity
If the cyborg student can do more and weirder work, the only way they can learn to do it well is by trying it and having human feedback

--newpage
--heading What do we recommend?
 A lot of this comes down to things we already know we need to do, but with more urgency

 * Explicit practice with reading articles and evaluating them, building a bullshit detector
 * Process journaling
 * Personal knowledge management skills
 * Large ambitious projects mixed with small skills focused work
--newpage
--heading Epistemic hygiene (aka bullshit detecting)
 Everyone needs to explicitly be trained on how to read at the edge of their understanding and still be able to tell whether something "sounds right" and also check sources and--b their--/b sources &c.

--newpage
--heading Process journaling

 The cyborg student needs a "lab book" of how LLMs and agents are used

 Analyzing the hybrid-cognitive process of the student needs to be part of assessment
--newpage
--heading Personal knowledge management
Since a cyborg student can find so much information we need to teach systems of personal knowledge management.

It can be Obsidian, Notion, a wiki, a notebook.

We need to teach citation management whether it's bibtex or zotero.

--newpage
--heading Ambitious projects
The cyborg student needs to be challenged to even know what they can do.

Ethan Mollick at Wharton has really good examples of this:

the Impossible Assignment and the Vibe Entrepreneurship assignment
--newpage 
--heading What are our next steps?
First step, please try out these tools.

Really stress test them.

There are skills needed but it's not as simple as "prompt engineering", it's a new kind of metacognitive skill

We cannot teach without knowing how it expands our capabilities
--newpage
--heading Questions?

