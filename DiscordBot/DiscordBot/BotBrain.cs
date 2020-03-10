using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using DiscordBot.Commands;
using DSharpPlus;
using DSharpPlus.CommandsNext;
using DSharpPlus.EventArgs;
using DSharpPlus.Interactivity;
using Newtonsoft.Json;

namespace DiscordBot
{
	public class BotBrain
	{
		public DiscordClient Client { get; private set; }
		public InteractivityExtension Interactivity { get; private set; }
		public CommandsNextExtension Commands { get; private set; }


		public async Task RunAsync()
		{
			var json = string.Empty;
			using (var fs = File.OpenRead("config.json"))
			using (var sr = new StreamReader(fs, new UTF8Encoding(false)))
				json = sr.ReadToEnd();


			var configJson = JsonConvert.DeserializeObject<ConfigJson>(json); //convert json to string

			var config = new DiscordConfiguration()
			{
				Token = configJson.Token,
				TokenType = TokenType.Bot,
				AutoReconnect = true,
				LogLevel = LogLevel.Debug,
				UseInternalLogHandler = true
			};

			Client = new DiscordClient(config);

			Client.Ready += OnClientReady;

			Client.UseInteractivity(new InteractivityConfiguration
			{
				Timeout = TimeSpan.FromDays(1)
			});

			var commandsConfig = new CommandsNextConfiguration
			{
				StringPrefixes =  new string[] {configJson.Prefix},
				EnableDms = false,
				EnableMentionPrefix = true,
				DmHelp = true
				//EnableDefaultHelp = false,
				//IgnoreExtraArguments = true,
				//UseDefaultCommandHandler = true
			};
			Commands = Client.UseCommandsNext(commandsConfig);
			Commands.RegisterCommands<FlareCommands>();
			Commands.RegisterCommands<AdminCommands>();
			Commands.RegisterCommands<UserCommands>();


			await Client.ConnectAsync();
			await Task.Delay(-1);
		}

		private Task OnClientReady(ReadyEventArgs ready) //What it does when the bot is turned on
		{
			return Task.CompletedTask;
		}
	}
}
