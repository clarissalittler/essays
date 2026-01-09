--author Clarissa The Adjoint
--title What can we teach the cyborg student?
--date today

--newpage
--heading What are we going to talk about?
 * The current state of LLM and LLM-agents
 * Where the technology is likely to go in the next few years
 * How do we use tools when learning?
 * How do tools affect cognitive processes?
 * Applications of extended mind
 * Epistemic practices in a world of knowledge-work automation
--newpage
--heading Whither ethics and environment
--center Let's get something big out of the way first
---
* This talk is on the science and engineering of LLMs and how they can/should impact higher-education
* We're dealing with necessities not contingencies
* The environmental impacts of hyperscale datacenters are almost entirely knock-on effects of the power infrastructure surrounding them
  * Clean and renewable would make them cost almost nothing
  * Dirty and inefficient, like xAI's methane burning generators, have a massive impact
* The regulation and policy around how/if private labs are allowed to use public infrastructure to build these artifacts is *beyond the scope of this talk*
* Also: Open source artifacts capable of running on a home computer are only a year behind the frontier models
* The efficient small scale models five years from now will almost certainly dwarf today's frontier models in power
--newpage
--heading In other words...
* Inefficiencies in the running and creation of models are contingencies
* We can, and should, be fighting to make this infrastructure better
* But this is a broader fight for renewables and against prolifigate water usage
---
* ...which is actually more about factory farming, decorative lawns, and inefficiences in industry than anything else
--- 
* even the most aggressive estimates for far future data center water consumption cap out at a tenth of a percent of global usage

--newpage
--heading What can LLMs actually do?

--center I apologize but this is going to be a bit long, there's a lot of catching up to do
--newpage
--heading What can LLMs actually do?
--center  First we're going to have to undo some misconceptions and misinformation
---
  * LLMs can spell strawberry and garlic
---
  * LLMs can do math
---
  * LLMs can write large quantities of high-quality code
---
  * LLMs can double-check their own sources
---
  * LLMs can fix their own mistakes before presenting their final result
--newpage
--heading Wait, what?
 Yes, LLMs *were* bad at many things for the first year, year and a half after the original ChatGPT (GPT 3.5). Essentially they were toys and a lot of people were overhyping their abilities.
---
Anyone else remember the flood of "courses" that were going to teach *you* how to turn Chat GEE PEE TEE into a source of Passive Income!
---
 But the underlying technology has been changing.
---
 Quickly.

--newpage
--heading What changed?
 There are two major things that changed:
 * Reasoning
 * Tool use
--newpage
--heading Reasoning?!
Caveat: there are ways we have to talk about these things that are going to sound anthropomorphizing. There's not really a good way around that. Sorry
--newpage
--heading Reasoning

 In LLM research "reasoning" is the ability to generate an "internal monologue", a chain-of-thought as its called in the literature, that the LLM reflects on before finalizing its response.

 Having this "scratch pad" of thought massively improves LLM's reliability in mathematics, programming, and logical reasoning.

 It's still, by itself, a limited trick: it takes LLMs from toys to being capable of *some* small knowledge-work tasks
--newpage
--heading Tool-use
The other major development that has massively extended LLM capability is *tool use*.

LLMs can now choose to call and use other programs while they work and, in fact, can integrate these tools into their own chain-of-thought.

So an LLM can write code, run said code, browse the web, read documents, write documents, run commands in a Linux terminal, and then make further reflection and tool use choices before finalizing its response.
--newpage
--heading LLM-agents
The current state of the art is not just an LLM chatbot, but an LLM equipped with a large set of tools it can use and the infrastructure to take repeated action "on its own" in order to solve a goal.

These are generally called "agents"/"agentic AI"/"LLM-agents" or similar
--newpage
--heading What can agents do?
There are two major ways people are measuring what agents can do: GDPVal and METR

* GDPVal measures the ability of LLMs to accomplish a wide-range of tasks that experts in knowledge-work fields have chosen
* As of writing this slide in early January 2026, the top frontier models produced work preferred by human experts in blind judging ~50% of the time and, if we count wins-and-ties, produced acceptable work closer to two-thirds of the time
* That's a little spooky!

--newpage
--heading METR and the horizon of tasks
The other way we're measuring the ability for LLMs to work on tasks is the work done by METR, trying to measure the long-horizon in human-equivalent terms of the tasks LLMs can handle reliably.

They've been charting an exponential curve where the doubling-time has been roughly every seven months, with task lengths progressing from seconds in 2019 to multiple hours as of late 2025.
---
We can quibble with the methodology and how exactly this should be measure, but what we can't deny is that this doubling time is a measurable effect

--newpage
--heading What's the anecdata?
So this is where we go beyond benchmarks to personal experience:
---
Agentic systems like Claude Code, which gives Anthropic's Claude series of models the ability to use a customizable set of tools on your own computer, can run for twenty, thirty, forty minutes at a time
---
These agents will explore ideas, see if they work, re-evaluate what they've done, and keep working
---
I'm not going to lie it feels a little spooky to watch
--newpage
--heading Deep Research tools
One of the really promising uses of LLMs now is as research agents: you can have them spend twenty minutes to an hour researching a topic, reading through a bunch of papers, and putting together an annotated bibliography.

The most powerful frontier models *very rarely* makes mistakes doing this. Possibly better than human baseline.
--newpage
--heading So why the memes?
If these systems are so powerful, why are there so many memes and screenshots about how bad they are?

* Some of those are fake
* Some are out of doubt
* Some are of models that are not very good (AI Overview I'm looking at you)

--newpage
--heading In summary
 Important Lesson #1: Not all models are equal
---
 Important Lesson #2: The underlying technology is changing rapidly
---
 Important Lesson #3: LLM-agents can already accomplish a subset of real knowledge work in ways that are human expert competitive 
---
 Important Lesson #4: You must constantly re-evaluate limitations
---
 Petty Lesson #1: Don't trust anyone's word if they don't specify the model they're talking about

--newpage
--heading The extended mind
 Are your cognitive processes the same or different when you
 * have your cell phone
---
 * have a notebook
---
 * use an LLM?
--newpage
--heading The extended mind
  Researchers such as Andy Clark would say no!

  We fundamentally think differently when we have access to tools that extend our cognition.

  The calculator extends our arithmetic knowledge. The notebook extends our memory.

  Books changed human cognition forever. Neal Postman loved writing about this point.

--newpage
--heading Merleau-Ponty on tools and the body
--newpage
--heading What does higher-education offer?
--newpage
--heading Epistemic skills
[todo: include information about how the ability to synthesize and validate information is more powerful than ever]
--newpage
--heading 