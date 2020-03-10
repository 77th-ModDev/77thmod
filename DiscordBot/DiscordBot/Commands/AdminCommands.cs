using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using DSharpPlus;
using DSharpPlus.CommandsNext;
using DSharpPlus.CommandsNext.Attributes;
using DSharpPlus.Entities;
using DSharpPlus.Interactivity;
using DSharpPlus.Interactivity.Enums;
using DSharpPlus.Net.Models;

namespace DiscordBot.Commands
{

	public class AdminCommands : BaseCommandModule
		{

			[Command("promote"),RequirePermissions(Permissions.ManageNicknames)]
			public async Task Promote(CommandContext ctx, DiscordMember profileName)
			{
				var name = profileName.Nickname;

				var rankHandler = new stringHandler();
				if (rankHandler.HasRank(name))
				{
					var rank = rankHandler.GetRank(name);

					var charRankArray = rank.ToCharArray();
					var trimedName = name.TrimStart(charRankArray);

					rank = rankHandler.FindNextRank(rank);
					var rankName = rank + trimedName;
					await profileName.ModifyAsync(member => member.Nickname = rankName);
					await ctx.Channel.SendMessageAsync("```Congratulations " + trimedName + " on your promotion to: " +
					                                   rank + ". you do the 77th proud.```").ConfigureAwait(false);
				}
				else
				{
					var rankName = "Pvt " + name;
					await profileName.ModifyAsync(member => member.Nickname = rankName);
					await ctx.Channel.SendMessageAsync("```Welcome to the 77th " + name + ". Good to have you.```")
						.ConfigureAwait(false);
				}

			}

			[Command("purge"),RequirePermissions(Permissions.Administrator)]
			public async Task Purge(CommandContext ctx, int number)
			{
				var messages = await ctx.Channel.GetMessagesAsync(number + 1);

				await ctx.Channel.DeleteMessagesAsync(messages);
				//ctx.Channel.DeleteMessagesAsync();
				await ctx.Channel
					.SendMessageAsync("```" + number.ToString() + " Messages deleted by moderator or admin. ```")
					.ConfigureAwait(false);
			}
			
			[Command("join"),RequirePermissions(Permissions.Administrator)]
			public async Task Join(CommandContext ctx)
			{
				var joinEmbed = new DiscordEmbedBuilder
				{
					Title = "New join server assignment.",
					ThumbnailUrl = ctx.Client.CurrentUser.AvatarUrl,
					Description =
						"You may only select one role, if you want it changed please contact a Section: 1 moderator.\n" +
						"Role Assignments are as follows 1: Looking To Join. 2: Non-Unit Member. 3: More info",
					Color = DiscordColor.CornflowerBlue
				};
				var joinMessage = await ctx.Channel.SendMessageAsync(embed: joinEmbed).ConfigureAwait(false);

				var one = DiscordEmoji.FromName(ctx.Client, ":one:");
				var two = DiscordEmoji.FromName(ctx.Client, ":two:");
				var three = DiscordEmoji.FromName(ctx.Client, ":three:");

				await joinMessage.CreateReactionAsync(one).ConfigureAwait(false);
				await joinMessage.CreateReactionAsync(two).ConfigureAwait(false);
				await joinMessage.CreateReactionAsync(three).ConfigureAwait(false);

				var interactivity = ctx.Client.GetInteractivity();
				var reactionResult = await interactivity.WaitForReactionAsync
				(x => x.Message == joinMessage &&
				      (x.Emoji == one || x.Emoji == two || x.Emoji == three)).ConfigureAwait(false);
				if (reactionResult.Result.Emoji == one)
				{
					var remove = ctx.Guild.GetRole(680263961119424563);
					await ctx.Member.RevokeRoleAsync(remove);
					var role = ctx.Guild.GetRole(680264178447286338);
					await ctx.Member.GrantRoleAsync(role);

				}
				else if (reactionResult.Result.Emoji == two) // Non Unit Member
				{
					var remove = ctx.Guild.GetRole(680264178447286338);
					await ctx.Member.RevokeRoleAsync(remove);
					var role = ctx.Guild.GetRole(680263961119424563);
					await ctx.Member.GrantRoleAsync(role);
				}
				else if (reactionResult.Result.Emoji == three)
				{
					await ctx.Member.SendMessageAsync("Info Packet:");
				}
				else
				{
					await ctx.Member.SendMessageAsync(
						"You used with the wrong reaction, please use the proper reaction for result.");
				}

				//await Join(ctx);
			}

			[Command("say")]
			public async Task Say(CommandContext ctx, string message)
			{
				if (!message.Contains("Scotch") || !message.Contains("scotch") || !message.Contains("SCOTCH"))
				{
					var messages = await ctx.Channel.GetMessagesAsync(1);
					await ctx.Channel.DeleteMessagesAsync(messages);
					await ctx.Channel.SendMessageAsync("```" + message + "```");
				}
				else
				{
					await ctx.Channel.SendMessageAsync("```Whatever, Scotch is Awesome.```");
				}
			}



		}
	}

