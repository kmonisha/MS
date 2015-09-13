import java.io.File;
import java.io.IOException;
import java.nio.*;
import java.nio.file.FileSystems;
import java.nio.file.FileVisitor;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.WatchEvent;
import java.nio.file.WatchEvent.Kind;
import java.nio.file.WatchEvent.Modifier;
import java.nio.file.WatchKey;
import java.nio.file.WatchService;
import java.util.Date;

import static java.nio.file.StandardWatchEventKinds.*;


public class FileWalker {
	public static void main(String[] args){
		File f  = new File("/home/itsme/workspace/MSExercise");
		Path path = Paths.get(System.getProperty("user.home"),"workspace","MSExercise");
		FileVisitor<Path> fileVisitor = new FileVisitorImpl();
		
		try{
//			WatchEvent<Kind> kind = 	
			WatchEvent.Kind<Modifier> d;
			WatchService watchService = FileSystems.getDefault().newWatchService();
			WatchKey key = path.register(watchService,ENTRY_CREATE, ENTRY_DELETE, ENTRY_MODIFY );
//			Files.walkFileTree(path, fileVisitor);
			
			
			while(true){
				System.out.println(watchService);
				key = watchService.take();
				System.out.println(key);
				for(WatchEvent<?> evets : key.pollEvents()){
					WatchEvent<Path> pa = (WatchEvent<Path>) evets;
					Path c = pa.context();
					WatchEvent.Kind<?> k  =evets.kind();
					if(k == ENTRY_CREATE){
						System.out.println(c+ " ENTRY_CREATE");
					}
					else if(k == ENTRY_DELETE){
						System.out.println(c+ " ENTRY_DELETE");
					}
					else{
						System.out.println(c+ " ENTRY_MODIFY");
					}
				}
//				Thread.sleep(300);
				key.reset();
			}
		}
		catch(IOException | InterruptedException ioEx){
			ioEx.printStackTrace();
		}
		if(f.isDirectory()){
//			System.out.println("d");
			for(String files : f.list()){
				File file = new File(f,files);
//				System.out.println(fileDetails(file));
			}
		}
		else{
//			System.out.println(fileDetails(f));
		}
	}
	public static String fileDetails(File file){
		String details = "";
		if(file.exists()){
			Path path = Paths.get(System.getProperty("user.home"),"workspace","MSExercise",file.getName());
			 details = file.isDirectory() ? "d" : "-";
			 details += file.canRead() ? "r" : "-";
			 details += file.canWrite() ? "w" : "-";
			 details += file.canExecute() ? "x" : "-";
			 details += " " + path.getNameCount();
			 details += " " + new Date(file.lastModified());
			 details += " " + file.length();
			 details += " " + file.getName();
		}
		else{
			details = "\t\t\t";
		}
		return details;
	}

}
