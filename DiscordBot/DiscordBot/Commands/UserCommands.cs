using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using DSharpPlus.CommandsNext;
using DSharpPlus.CommandsNext.Attributes;
using DSharpPlus.Entities;
using DSharpPlus.Interactivity;

namespace DiscordBot.Commands
{
	public class UserCommands : BaseCommandModule
	{
		[Command("accept")]
		public async Task AcceptTerms(CommandContext ctx)
		{
			await ctx.Member.SendMessageAsync(
				"```Welcome to the the 77th SMU/ODST Bat's Discord server. My name is Constantine I am a basic administration AI used in the 77th. " +
				"By agreeing to our Code of conduct you have been assigned the role \"Processed\" ```");
			var role = ctx.Guild.GetRole(680582210876735529);
			await ctx.Member.GrantRoleAsync(role);
		}
		[Command("roleplay")]
		public async Task RoleplayRole(CommandContext ctx)
		{

			await ctx.Member.SendMessageAsync(
				"```You have been given the roleplayer tag. Please read the rules in the rules channel before you begin ```");


			var role = ctx.Guild.GetRole(672103081978232945);
			await ctx.Member.GrantRoleAsync(role);
		}


		[Command("setName")]
		public async Task SetName(CommandContext ctx, string firstname, string lastName)
		{
			var part1 = firstname.Remove(1);
			part1 = part1.ToUpper() + '.';
			var part2 = char.ToUpper(lastName[0]) + lastName.Substring(1);


			var name = part1 + ' ' + part2;
			//await ctx.Channel.SendMessageAsync("```" + name + ".```").ConfigureAwait(false);

			//var member = ctx.Member;

			await ctx.Member.ModifyAsync(member => member.Nickname = name);
			await ctx.Channel.SendMessageAsync("```Your Nickname on the 77th SMU/ODST Bat. Server has been set to " + name + ". If this is not correct try the command again.```").ConfigureAwait(false);

		}
	}
}
