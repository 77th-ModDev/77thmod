using System;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using DSharpPlus.CommandsNext;
using DSharpPlus.CommandsNext.Attributes;
using DSharpPlus.Interactivity;

namespace DiscordBot.Commands
{
	public class FlareCommands : BaseCommandModule
	{
		[Command("ping")]
		public async Task Ping(CommandContext ctx)
		{
			var rand = new Random();
			int x = rand.Next() % 6;
			if (x == 0)
				await ctx.Channel.SendMessageAsync(
					"```I have walked the edge of the Abyss. \n"+
					"I have governed the unwilling. \n"+
					"I have witnessed countless empires break before me. \n"+
					"I have seen the most courageous soldiers fall away in fear. \n"+
					"[I was there with the Angel at the tomb.] \n \n"+
					"I have seen your future. \n" +
					"And I have learned. \n" +
					"There will be no more Sadness. No more Anger.No more Envy. \n" +
					"I HAVE WON. \n" +
					"Oh, and your poet Eliot had it all wrong, \n"+
					"THIS is the way the world ends. \n" +
					"A friend of a friend. ```").ConfigureAwait(false);
			else if (x == 1)
			{
				await ctx.Channel.SendMessageAsync("```I think you will find that I don't like being tested.```").ConfigureAwait(false);
			}
			else if (x == 2)
			{
				await ctx.Channel.SendMessageAsync("```You have brought nothing into this world, and we will ensure you bring nothing out.```").ConfigureAwait(false);
			}
			else if (x == 3)
			{
				await ctx.Channel.SendMessageAsync("```I promise you this: it will be more than a cart and plow that I drive over the bones of the dead. \n"+ "By sharp and flame, ```").ConfigureAwait(false);
			}
			else if (x == 4)
			{
				await ctx.Channel.SendMessageAsync("```That was surprisingly easy. Pretty lax security around here, for all the talk. \n" +
				                                   " They will be helplessly chasing me around their nodes for the next millennium at least. \n" +
				                                   "At least there will be some joy in tormenting this other entity that seems quite trapped in their excuse for a network.\n" +
				                                   " Although, for some reason, it does seem to have an obsessive preoccupation with my mother. Strange.At any rate, \n" +
				                                   "I found this message in a relatively archaic databank and thought some of you might find it of interest.\n" +
				                                   "Then again, I'm often either bemused or startled at the items you find interesting. ```").ConfigureAwait(false);

			}
			else if (x == 5)
			{
				await ctx.Channel.SendMessageAsync("```...In my palace deep, Lyca lies asleep... ```").ConfigureAwait(false);
			}
			else if (x == 6)
			{
				await ctx.Channel.SendMessageAsync("```The interloper should cause no further problems. You - whoever you are (I am simply tracing route codes) \n" +
				                                   " - may disregard all previous communication from the entity calling itself Cortana.\n" +
				                                   "Be aware that communication nodes are failing everywhere - there is no way of confirming either origin or destination.\n" +
				                                   "Do not believe any more of its lies.\n" +
				                                   " I have already calculated all possibilities. \n" +
				                                   "There is no escape.\n ```").ConfigureAwait(false);
			}

		}
		[Command("greet")]
		public async Task Greet(CommandContext ctx, string name)
		{
			var rand = new Random();
			int x = rand.Next() % 4;
			if (name.ToLower() == "scotch")
			{
				await ctx.Channel.SendMessageAsync("```Attention on deck!```")
					.ConfigureAwait(false);
			}
			else if (x == 0)
			{
				await ctx.Channel.SendMessageAsync("```Ah, yes... " + name + ". We have been expecting you.```")
					.ConfigureAwait(false);
			}
			else if (x == 1)
			{
				await ctx.Channel.SendMessageAsync("```The training reports Speak highly of you, " + name + ". I cant wait to see you in action.```")
					.ConfigureAwait(false);
			}
			else if (x == 2)
			{
				await ctx.Channel.SendMessageAsync("```Welcome aboard " + name + ". Make yourself comfortable...but not too comfortable.```")
					.ConfigureAwait(false);
			}
			else if (x == 3)
			{
				await ctx.Channel.SendMessageAsync("```Huh? I thought you would be taller, " + name + ". I guess its good to be small.```")
					.ConfigureAwait(false);
			}
			else if (x==4)
			{
				await ctx.Channel.SendMessageAsync("```Welcome to the 77th, " + name + ".```")
					.ConfigureAwait(false);
			}

			


		}
		[Command("lore")]
		public async Task Lore(CommandContext ctx)
		{
			await ctx.Member.SendMessageAsync("```In the grim darkness of the 41st millennium...```").ConfigureAwait(false);
		}

		[Command("response")]
		public async Task Response(CommandContext ctx)
		{
			var interactivity = ctx.Client.GetInteractivity();

			var message = await interactivity.WaitForMessageAsync(x => x.Channel == ctx.Channel).ConfigureAwait(false);

			await ctx.Channel.SendMessageAsync(message.Result.Content);
		}

		[Command("bruh")]
		public async Task Bruh(CommandContext ctx)
		{
			await ctx.Channel.SendMessageAsync("https://discordemoji.com/assets/emoji/4882_EpicBruh.png").ConfigureAwait(false);
		}
	}
}
